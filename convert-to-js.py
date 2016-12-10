#!/usr/bin/python

from __future__ import print_function
from tempfile import mkdtemp
import subprocess
import fnmatch
import shutil
import json
import sys
import os

def writeFile(filename, text):
    if filename != '--':
        with open(filename, "wb") as fvar:
            fvar.write(text)
    else:
        return sys.stdout.write(text)
def readFile(filename):
    if filename != '--':
        with open(filename, "rb") as fvar:
            return fvar.read()
    else:
        return sys.stdin.read()

def mkTempDir():
    return mkdtemp(prefix='convert_to_js_')

def exec_command(command, shell=True, stdout=None, stderr=None):
    """Runs a command with the given arguments."""
    subprocess.check_call(command, shell=shell, stdout=stdout, stderr=stderr)


def minifyJS(jsfile, level='WHITESPACE_ONLY'):
    # NOTE: If the ADVANCED_OPTIMIZATIONS compilation level causes
    #       problems then we should change it to SIMPLE_OPTIMIZATIONS
    # NOTE: This should not be used for user provided JS code. This is
    #       only for code which is compiled down from user generated code
    #       in other languages. User provided JS should be minified using
    #       compilation level WHITESPACE_ONLY.

    output = ''
    with open(os.devnull) as devnull:
        output = subprocess.check_output(['closure-compiler', '--compilation_level', level,
                                          '--js', jsfile, '--third_party'], stderr=devnull)
    with open(jsfile, 'w') as dst:
        dst.write(output)

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version of
#                  java the source file is
def compileJava(text, version_string='1.8'):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.java', text)

        exec_command('compile-java ' + filename + '.java ' + version_string + ' ' + tmpdir)
        exec_command(['mv', tmpdir + '/result.js', filename + '.js'])

        main_name = ''
        for rfile in fnmatch.filter(os.listdir(tmpdir), '*.class'):
            main_name = subprocess.check_output(['find-main', rfile])
            break # TODO: Make this do something

        # TODO: Magic goes here

        outtext = readFile(filename + '.js')
        outtext += """
try {
    javaMethods.get('""" + main_name + """([java/lang/String;)V;').invoke([]);
}
catch (err) {
    console.log(err);
}
"""
        return outtext
    finally:
        shutil.rmtree(tmpdir, True)
def compileWithClang(text, extargs='', ext='.cpp'):
    """Compile a given file with the given source
    code and extra arguments using Clang
     text: The C++ or C source code
     extargs: Extra args for the compiler
     ext: The file extension that the generated file will have
    """
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + ext, text)

        exec_command(['emcc', '-O3', '-Wall', filename + ext, '-o', filename + '.bc']
                     + extargs.split(' '), shell=False)
        exec_command(['emcc', '-O3', filename + '.bc', '-o', filename + '.js',
                      '--memory-init-file', '0'], shell=False)

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

        exec_command('tsc ' + filename + '.ts')

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
def compileCOBOL(text):
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/tmpfile'

        writeFile(filename + '.cbl', text)

        exec_command('cobc -C -Wall ' + filename + '.cbl -o ' + filename + '.c')
        exec_command('emcc -O3 ' + filename + '.c -o ' + filename + '.bc')
        exec_command('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileScheme(text):
    """Compiles scheme code using the Chicken Scheme compiler and emscripten."""
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/file'

        writeFile(filename + '.scm', text)

        exec_command('csc -t ' + filename + '.scm -optimize-level 3 -output-file ' + filename+'.c')
        exec_command('emcc ' + filename + '.c -o ' + filename + '.bc')
        exec_command('emcc ' + filename + '.bc -o ' + filename + '.js')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)
def compileRuby(text):
    """Compiles a Ruby file using the Opal Compiler"""
    tmpdir = mkTempDir()
    try:
        filename = tmpdir + '/file'

        writeFile(filename + '.rb', text)

        if os.system('opal-exec ' + filename + '.rb ' + filename + '.js') != 0:
            raise subprocess.CalledProcessError("opal-exec returned non-zero exit status",
                                                'opal-exec ' + filename + '.rb ' + filename + '.js')
        minifyJS(filename + '.js', 'SIMPLE_OPTIMIZATIONS')

        return readFile(filename + '.js')
    finally:
        shutil.rmtree(tmpdir, True)

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
        'Java 1.7':      lambda text: compileJava(text, '1.7'),
        'Java 1.8':      lambda text: compileJava(text, '1.8'),
        'Objective-C++': lambda text: compileWithClang(text, '', '.mm'),
        'Objective-C'  : lambda text: compileWithClang(text, '', '.m'),
        'Haskell':       compileHaskell,
        'CoffeeScript':  compileCoffeeScript,
        'TypeScript':    compileTypeScript,
        'COBOL':         compileCOBOL,
        'Scheme':        compileScheme,
        'Ruby':          compileRuby,
    }.get(lang, default)(code)

def main():
    """main"""
    if len(sys.argv) < 3:
        print('usage: convert-to-js <input-file> <output-file>')
    else:
        intext = json.load(open(sys.argv[1]))
        outtext = compileUserFile(intext['lang'], intext['text'])
        writeFile(sys.argv[2], outtext)
        sys.exit(0)

if __name__ == '__main__': # Script was executed from the command line
    try:
        main()
    except subprocess.CalledProcessError as err:
        sys.exit(1)

