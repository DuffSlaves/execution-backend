from __future__ import print_function
from tempfile import mkdtemp
from subprocess import Popen
from subprocess import PIPE
import subprocess
import fnmatch
import shutil
import json
import sys
import os

def output(str):
    sys.stdout.write(str)
def error(str):
    sys.stderr.write(str)

class RequestValue:
   def __init__(self, lang, text):
       self.lang = lang
       self.text = text
       
def writeFile(filename, text):
    with open(filename, "wb") as f:
        f.write(text)
def readFile(filename):
    with open(filename, "rb") as f:
        return f.read()

def mkTempDir():
    return mkdtemp(prefix='convert_to_js_')

def exec_command(command, shell=False):
    proc = subprocess.check_call(command, shell=shell)

    
def minifyJS(jsfile, level = 'ADVANCED_OPTIMIZATIONS'):
    # NOTE: If the ADVANCED_OPTIMIZATIONS compilation level causes
    #       problems then we should change it to SIMPLE_OPTIMIZATIONS
    # NOTE: This should not be used for user provided JS code. This is
    #       only for code which is compiled down from user generated code
    #       in other languages. User provided JS should be minified using
    #       compilation level WHITESPACE_ONLY.
    try:
        print(jsfile)
        exec_command(['closure-compiler', '--compilation_level', level, ' --js ', jsfile, '--js_output_file', jsfile, '--third_party'])
    except:
        pass

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version of
#                  java the source file is
def compileJava(text, version_string):
    raise NotImplementedError("Compiling Java is not supported at this time.")

    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'
        
        writeFile(filename + '.java', text)

        exec_command('javac -source ' + version_string + ' ' + filename + '.java')

        for file in fnmatch.filter(os.listdir(tmpdir), '*.class'):
            continue # TODO: Make this do something
        
        return readFile(file)
    finally:
        shutil.rmtree(tmpdir, True)
# Compile a given file with the given source
# code and extra arguments using Clang
#  text: The C++ or C source code
#  extargs: Extra args for the compiler
#  ext: The file extension that the generated file will have
def compileWithClang(text, extargs = '', ext = '.cpp'):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + ext, text)

        exec_command('emcc -O3 -Wall ' + filename + ext + ' -o ' + filename + '.bc ' + extargs)
        exec_command('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
        minifyJS(filename + '.js')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileHaskell(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'
        
        writeFile(filename + '.hs', text)
        
        exec_command('ghcjs ' + filename + '.hs -o ' + filename + '.js')
        minifyJS(filename + '.js')
        
        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileTypeScript(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.ts', text)

        exec_process('tsc ' + filename + '.ts')
        
        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileCoffeeScript(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.coffee', text)

        exec_command('coffee -o ' + tmpdir + ' -c ' + filename)

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compilePython3(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.py', text)

        exec_command('pyjsbuild ' + filename + '.py -o ' + filename + '.js')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileCOBOL(text, dialect):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.cbl', text)

        exec_command('cobc -C -Wall ' + filename + '.cbl -o ' + filename + '.c')
        exec_command('emcc -O3 ' + filename + '.c -o ' + filename + '.bc')
        exec_command('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
        
        return readFile(filename = '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileScheme(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/file'

        writeFile(filename + '.scm', text)

        exec_command('csc -t ' + filename + '.scm -optimize-level 3 -output-file ' + filename + '.c')
        exec_command('emcc ' + filename + '.c -o ' + filename + '.bc')
        exec_command('emcc ' + filename + '.bc -o ' + filename + '.js')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileRuby(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/file'

        writeFile(filename + '.rb', text)
        
        with open(filename + '.js', "w") as f:
            subprocess.call(['opal', '-c', filename + '.rb', '--file', filename + '.js'], stdout=f)
        #minifyJS(filename + '.js')

        return readFile(filename + '.js')
    finally:
        print('Errored')
        #shutil.rmtree(tmpdir, True)

def compileUserFile(lang, code):
    default = lambda text: ''
    return {
        'C++14':         lambda text: compileWithClang(text, '-std=c++14'),
        'C++11':         lambda text: compileWithClang(text, '-std=c++11'),
        'C++98':         lambda text: compileWithClang(text, ''),
        'C++1z':         lambda text: compileWithClang(text, '-std=c++1z'),
        'C89'  :         lambda text: compileWithClang(text, '-std=c89', '.c'),
        'C99'  :         lambda text: compileWithClang(text, '-std=c99', '.c'),
        'C11'  :         lambda text: compileWithClang(text, '-std=c11', '.c'),
        'C94'  :         lambda text: compileWithClang(text, '-std=c94', '.c'),
        'Java 1.3':      lambda text: compileJava(text, '1.3'),
        'Java 1.4':      lambda text: compileJava(text, '1.4'),
        'Java 1.5':      lambda text: compileJava(text, '1.5'),
        'Java 1.6':      lambda text: compileJava(text, '1.6'),
        'Java 1.7':      lambda text: compileJava(text, '1.7'),
        'Java 1.8':      lambda text: compileJava(text, '1.8'),
        'Objective-C++': lambda text: compileWithClang(text, '', '.mm'),
        'Objective-C'  : lambda text: compileWithClang(text, '', '.m'),
        'Haskell':       lambda text: compileHaskell(text),
        'CoffeeScript':  lambda text: compileCoffeeScript(text),
        'TypeScript':    lambda text: compileTypeScript(text),
        'COBOL':         lambda text: compileCOBOL(text),
        'Scheme':        lambda text: compileScheme(text),
        'Ruby':          lambda text: compileRuby(text),
    }.get(lang, default)(code)

if __name__ == '__main__': # Script was executed from the command line
    if len(sys.argv) < 3:
        print('usage: convert-to-js <input-file> <output-file>')
    else:
        input = json.load(open(sys.argv[1]))
        output = compileUserFile(input['lang'], input['text'])
        print(sys.argv)
        print(output)
        writeFile(sys.argv[2], output)
        
