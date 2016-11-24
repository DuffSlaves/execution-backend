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
    return os.system("closure-compiler --compilation_level" + level + ' --js ' + jsfile)

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version of
#                  java the source file is
def compileJava(text, version_string):
    try:
        tmpdir = gettempdir()
        output = ''
        result = ''
        filename = tmpdir + generateRandomString()

        writeFile(filename + '.java', text)

        os.system('javac -source ' + version_string + ' ' + filename + '.java')
        
        result = readFile(filename + '.class')

        os.remove(filename + '.java')
        os.remove(filename + '.class')

        return RequestReturn(output, result)
    except:
        pass
    return RequestReturn('An unexpected error occurred while compiling the code.', '')

def compileWithClang(text, ext = '.cpp'):
    try:
        tmpdir = gettempdir()
        output = ''



