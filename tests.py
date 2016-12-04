from __future__ import print_function
from colorama import init, Fore
import subprocess
import json
import os

init(autoreset=True)

class test:
    def __init__(self, name, lang, code):
        self.json = json.dumps({ 'text': code, 'lang': lang })
        self.name = name

hello_world_tests = [ # All of these should end up printing 'Hello, World!' when run
    test('C++14 Hello World', 'C++14', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    test('C++11 Hello World', 'C++11', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    test('C++03 Hello World', 'C++03', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    test('C++98 Hello World', 'C++98', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    test('C++1z Hello World', 'C++1z', '#include <iostream>\nint main(int argc, char** argv) { std::cout << "Hello, World!" << std::endl; }'),
    test('C11 Hello World', 'C11', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    test('C99 Hello World', 'C99', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    test('C89 Hello World', 'C89', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    test('C94 Hello World', 'C94', '#include <stdio.h>\nint main(int argc, char** argv) { printf("Hello, World!"); }'),
    test('COBOL Hello World', 'COBOL', 
         """
IDENTIFICATION DIVISION.
PROGRAM-ID. HELLOWORLD.

PROCEDURE DIVISION.
    DISPLAY 'Hello, World!'.
    STOP RUN.
         """),
    test('Java 1.3 Hello World', 'Java 1.3', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Java 1.4 Hello World', 'Java 1.4', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Java 1.5 Hello World', 'Java 1.5', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Java 1.6 Hello World', 'Java 1.6', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Java 1.7 Hello World', 'Java 1.7', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Java 1.8 Hello World', 'Java 1.8', 'class HelloWorld{ public static void main(String[]args){ System.out.println("Hello, World!"); } }'),
    test('Haskell', 'Haskell', 'main = putStrLn "Hello, World!"'),
]

class TestFailedException:
    def __init__(self):
        return

def run_test(testval, expected):
    try:
        with open('testfile.in', 'w') as f:
            f.write(testval.json)

        print (Fore.CYAN + "[Running test '" + testval.name + "']")

        subprocess.check_call(['./convert-to-js.py', 'testfile.in', 'testfile.js'], shell=True, check=True)

        os.unlink('testfile.in')

        output = check_output('node testfile.js')
        
        os.unlink('testfile.js')

        print(output)
        if output != expected:
            raise TestFailedException();

        print (Fore.GREEN + "[Test Succeeded]")
        return True
    except:
        print (Fore.RED + "[Test Failed]")
        pass
    return False

if __name__ == '__main__':
    result = True

    print (Fore.CYAN + "[Running Tests]")

    for tst in hello_world_tests:
        val = run_test(tst, "Hello, World")
        result = result and val

    if not result:
        print (Fore.RED + "[Tests Failed]")
        raise TestFailedException()
