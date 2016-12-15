#!/usr/bin/python

from __future__ import print_function
import subprocess
import json
import os
import sys
from colorama import init, Fore

init(autoreset=True)

class Test:
    def __init__(self, name, lang, code):
        self.json = json.dumps({'text': code, 'lang': lang})
        self.name = name

HELLO_WORLD_TESTS = [ # All of these should end up printing 'Hello, World!' when run
    Test('C++14 Hello World', 'C++14', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    Test('C++11 Hello World', 'C++11', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    Test('C++98 Hello World', 'C++98', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    Test('C++1z Hello World', 'C++1z', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    Test('C11 Hello World', 'C11', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    Test('C99 Hello World', 'C99', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    Test('C89 Hello World', 'C89', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    Test('COBOL Hello World', 'COBOL', 
         """
IDENTIFICATION DIVISION.
PROGRAM-ID. HELLOWORLD.

PROCEDURE DIVISION.
    DISPLAY 'Hello, World!'.
    STOP RUN.
         """),
    Test('Java Hello World', 'Java', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    Test('Haskell', 'Haskell', 'main = putStrLn "Hello, World!"'),
    Test('Scheme', 'Scheme', '(print "Hello, World!")'),
    Test('Ruby', 'Ruby', 'puts "Hello, World!"'),
]

class TestFailedException(Exception):
    """An exception thrown to indicate that a test failed."""
    def __init__(self, err=''):
        super(TestFailedException, self).__init__(err)
        return

def run_test(testval, expected):
    try:
        with open('testfile.in', 'w') as f:
            f.write(testval.json)

        print (Fore.CYAN + "[Running test '" + testval.name + "']")

        subprocess.check_call('./convert-to-js.py testfile.in testfile.js',
                              shell=True)

        os.unlink('testfile.in')

        output = subprocess.check_output('nodejs testfile.js', shell=True)

        os.unlink('testfile.js')

        if output != expected:
            print(output)
            raise TestFailedException("Test output did not match expected output")

        print (Fore.GREEN + "[Test Succeeded]")
        return True
    except subprocess.CalledProcessError as err:
        print (Fore.RED + err.cmd)
    except Exception as exc:
        print (Fore.RED + exc.message)

    print (Fore.RED + "[Test Failed]")
    return False

def main():
    result = True

    print (Fore.CYAN + "[Running Tests]")

    for tst in HELLO_WORLD_TESTS:
        val = run_test(tst, "Hello, World!\n")
        result = result and val

    if not result:
        print (Fore.RED + "[Tests Failed]")
        sys.exit(1)

if __name__ == '__main__':
    main()
