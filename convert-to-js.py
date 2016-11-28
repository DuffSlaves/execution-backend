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
    with open(filename, "w") as f:
        f.write(text)
def readFile(filename):
    with open(filename, "r") as f:
        return f.read()

def mkTempDir():
    return mkdtemp(prefix='convert_to_js_')

def exec_command(command):
    proc = Popen(command, stdout=PIPE, stderr=PIPE)
    (out, err) = proc.communicate()
    output(out)
    error(err)
    
def minifyJS(jsfile, level = 'ADVANCED_OPTIMIZATIONS'):
    # NOTE: If the ADVANCED_OPTIMIZATIONS compilation level causes
	#       problems then we should change it to SIMPLE_OPTIMIZATIONS
	# NOTE: This should not be used for user provided JS code. This is
	#       only for code which is compiled down from user generated code
	#       in other languages. User provided JS should be minified using
	#       compilation level WHITESPACE_ONLY.
    exec_command("closure-compiler --compilation_level" + level + ' --js ' + jsfile)

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version of
#                  java the source file is
def compileJava(text, version_string):
    result = ''

    # Java compilation is not implemented yet
    raise NotImplementedError("Java compilation has not been implemented yet");

    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.java', text)

    exec_command('javac -source ' + version_string + ' ' + filename + '.java')

    for file in fnmatch.filter(os.listdir(tmpdir), '*.class'):
        continue # TODO: Make this do something
    
    result = readFile(file)

    shutil.rmtree(tmpdir, True)

    return result
# Compile a given file with the given source
# code and extra arguments using Clang
#  text: The C++ or C source code
#  extargs: Extra args for the compiler
#  ext: The file extension that the generated file will have
def compileWithClang(text, extargs = '', ext = '.cpp'):
    result = ''

    tmpdir = mkTempDir()
    filename = tmpdir + '\\tmpfile'

    writeFile(filename + ext, text)
    filename = tmpdir + 'tmpfile'

    exec_command('emcc -O3 -Wall ' + filename + ext + ' -o ' + filename + '.bc ' + extargs)
    exec_command('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
    minifyJS(filename + '.js')

    result = readFile(filename + '.js')

    shutil.rmtree(tmpdir, True)

    return result
def compileHaskell(text):
    result = None

    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.hs', text)

    exec_command('ghcjs ' + filename + '.hs -o ' + filename + '.js')
    minifyJS(filename + '.js')

    result = readFile(filename + '.js')

    shutil.rmtree(tmpdir, True)

    return result
def compileTypeScript(text):
    result = None

    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.ts', text)

    exec_process('tsc ' + filename + '.ts')
    
    result = readFile(filename + '.js')

    shutil.rmtree(tmpdir, True)

    return result
def compileCoffeeScript(text):
    result = None

    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.coffee', text)

    exec_command('coffee -o ' + tmpdir + ' -c ' + filename)

    result = readFile(filename + '.js')

    shutil.rmtree(tmpdir, True)

    return result
def compilePython3(text):
    result = None

    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.js', text)

    exec_command('pyjsbuild ' + fliename + '.py -o ' + filename + '.js')

    result = readFile(filename + '.js')

    shutil.rmtree(tmpdir, True)

    return RequestReturn(output, result)
def compileCOBOL(text, dialect):
    result = None
    tmpdir = mkTempDir()
    filename = tmpdir + 'tmpfile'

    writeFile(filename + '.cbl', text)

    exec_command('cobc -C -Wall ' + filename + '.cbl -o ' + filename + '.c')
    exec_command('emcc -O3 ' + filename + '.c -o ' + filename + '.bc')
    exec_command('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
    
    result = readFile(filename = '.js')
    
    shutil.rmtree(tmpdir, True)

    return result

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
         'Objective-C++': lambda text: compileWithClang(text, '', '.mm'),
         'Objective-C'  : lambda text: compileWithClang(text, '', '.m'),
         'Haskell':       lambda text: compileHaskell(text),
         'CoffeeScript':  lambda text: compileCoffeeScript(text),
         'TypeScript':    lambda text: compileTypeScript(text),
         'COBOL':         lambda text: compileCOBOL(text),
     }.get(lang, default)(code)

if __name__ == '__main__': # Script was executed from the command line
    if len(sys.argv) < 3:
        print('usage: convert-to-js <input-file> <output-file>')
    else:
        text = readFile(sys.argv[1])
        input = json.loads(text)
        output = compileUserFile(input['lang'], input['text'])
        writeFile(sys.argv[2], output)
        sys.exit()
        