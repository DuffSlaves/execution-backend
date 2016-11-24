from tempfile import gettempdir
from random import randint
import os
import subprocess

class RequestValue:
   def __init__(self, lang, text):
       self.lang = lang
       self.text = text

class RequestReturn:
    def __init__(self, output, result):
        self.output = output
        self.result = result

def writeFile(filename, text):
    with open(filename, "wb") as f:
        f.write(text)
def readFile(filename):
    with open(filename, "rb") as f:
        return f.read()

def generateRandomString(length = 50):
    characters = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
    result = ''
    for i in xrange(length):
        result += characters[randint(0, len(characters) - 1)]
    return result

def minifyJS(jsfile, level = 'ADVANCED_OPTIMIZATIONS'):
    # NOTE: If the ADVANCED_OPTIMIZATIONS compilation level causes
	#       problems then we should change it to SIMPLE_OPTIMIZATIONS
	# NOTE: This should not be used for user provided JS code. This is
	#       only for code which is compiled down from user generated code
	#       in other languages. User provided JS should be minified using
	#       compilation level WHITESPACE_ONLY.
    return subprocess.check_output("closure-compiler --compilation_level" + level + ' --js ' + jsfile)

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version of
#                  java the source file is
def compileJava(text, version_string):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.java', text)

        output += subprocess.check_output('javac -source ' + version_string + ' ' + filename + '.java')
        
        result = readFile(filename + '.class')

        os.remove(filename + '.java')
        os.remove(filename + '.class')

        return RequestReturn(output, result)
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

# Compile a given file with the given source
# code and extra arguments using Clang
#  text: The C++ or C source code
#  extargs: Extra args for the compiler
#  ext: The file extension that the generated file will have
def compileWithClang(text, extargs = '', ext = '.cpp'):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()

        writeFile(filename + ext, text)

        output += subprocess.check_output('emcc -O3 -Wall ' + filename + ext + ' -o ' + filename + '.bc ' + extargs)
        output += subprocess.check_output('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
        output += minifyJS(filename + '.js')

        result = readFile(filename + '.js')

        os.remove(filename + ext)
        os.remove(filename + '.bc')
        os.remove(filenaem + '.js')
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

def compileHaskell(text):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.hs', text)

        output += subprocess.check_output('ghcjs ' + filename + '.hs -o ' + filename + '.js')
        output += minifyJS(filename + '.js')

        result = readFile(filename + '.js')

        os.remove(filename + '.hs')
        os.remove(filename + '.js')
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

def compileTypeScript(text):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.ts', text)

        output += subprocess.check_output('tsc ' + filename + '.ts')
        
        result = readFile(filename + '.js')

        os.remove(filename + '.ts')
        os.remove(filename + '.js')
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

def compileCoffeeScript(text):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.coffee', text)

        output += subprocess.check_output('coffee -o ' + tmpdir + ' -c ' + filename)

        result = readFile(filename + '.js')

        os.remove(filename + '.coffee')
        os.remove(filename + '.js')
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

def compilePython3(text):
    output = ''
    result = ''
    try:
        tmpdir = gettempdir()
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.js', text)

        output += subprocess.check_output('pyjsbuild ' + fliename + '.py -o ' + filename + '.js')

        result = readFile(filename + '.js')

        os.remove(filename + '.py')
        os.remove(filename + '.js')
    except:
        output += "An unexpected error occurred while compiling the code."
        result = None
        pass
    return RequestReturn(output, result)

def compileCOBOL(text, dialect):
    output = ''
    result = ''
    try:
        writeFile(filename + '.cbl', text)

        output += subprocess.check_output('cobc -C -Wall ' + filename + '.cbl -o ' + filename + '.c')
        output += subprocess.check_output('emcc -O3 ' + filename + '.c -o ' + filename + '.bc')
        output += subprocess.check_output('emcc -O3 ' + filename + '.bc -o ' + filename + '.js')
        
        result = readFile(filename = '.js')
        
        os.remove(filename + '.cbl')
        os.remove(filename + '.c')
        os.remove(filename + '.bc')
        os.remove(fliename + '.js')
     except:
         output += "An unexpected error occurred while compiling the code."
         result = None
         pass
     return RequestReturn(output, result)

 def compileUserFile(reqval):
     default = lambda text: return ReturnResult(None, None)
     return {
         'C++14': lambda text: compileWithClang(text, '-std=c++14'),
         'C++11': lambda text: compileWithClang(text, '-std=c++11'),
         'C++98': lambda text: compileWithClang(text, ''),
         'C++1z': lambda text: compileWithClang(text, '-std=c++1z'),
         'C89'  : lambda text: compileWithClang(text, '-std=c89', '.c'),
         'C99'  : lambda text: compileWithClang(text, '-std=c99', '.c'),
         'C11'  : lambda text: compileWithClang(text, '-std=c11', '.c'),
         'C94'  : lambda text: compileWithClang(text, '-std=c94', '.c'),
         'Java 1.3': lambda text: compileJava(text, '1.3'),
         'Java 1.4': lambda text: compileJava(text, '1.4'),
         'Java 1.5': lambda text: compileJava(text, '1.5'),
         'Java 1.6': lambda text: compileJava(text, '1.6'),
         'Java 1.7': lambda text: compileJava(text, '1.7'),
         'Objective-C++': lambda text: compileWithClang(text, '', '.mm')
         'Objective-C'  : lambda text: compileWithClang(text, '', '.m')
         'Haskell': lambda text: compileHaskell(text)
         'CoffeeScript': lambda text: compileCoffeeScript(text)
         'TypeScript': lambda text: compileTypeScript(text)
         'COBOL': lambda text: compileCOBOL(text)
     }.get(reqval.lang, default)(reqval.text)


