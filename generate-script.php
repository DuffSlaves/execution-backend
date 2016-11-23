<?php
# A request to generate a code file
class RequestValue {
	# The language that the code is in
	var $lang;
	# The code text
	var $text;
};
class RequestReturn {
	# Compiler Output
	var $output;
	# Compilation Result
	var $code;

	void __construct($output, $code)
	{
		$this->output = $output;
		$this->code = $code;
	}
};

function generateRandomString($length = 50) {
	$characters = '0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
    $charactersLength = strlen($characters);
    $randomString = '';
    for ($i = 0; $i < $length; $i++) {
        $randomString .= $characters[rand(0, $charactersLength - 1)];
    }
    return $randomString;
}

function minifyJS($jsfile, $level = "ADVANCED_OPTIMIZATIONS") {
	# NOTE: If the ADVANCED_OPTIMIZATIONS compilation level causes
	#       problems then we should change it to SIMPLE_OPTIMIZATIONS
	# NOTE: This should not be used for user provided JS code. This is
	#       only for code which is compiled down from user generated code
	#       in other languages. User provided JS should be minified using
	#       compilation level WHITESPACE_ONLY.
	return shell_exec("closure-compiler --compilation_level "
						. $level . " --js " . $jsfile);
}

# Compile a given java file with the file text
# and a string indicating which java version to
# compile it to
#  text: The actual code text
#  version_string: A string which is passed as an argument to
#                  javac and used to indicate which version to
#                  compile the code as
function compileJavaFile($text, $version_string) {
  $tmpdir = sys_get_temp_dir();
  $output = "";
  $result = "";
  $filename = generateRandomString();

  if(file_put_contents($tmpdir . $filename . ".java")
  {
    $output = shell_exec("javac -source " . $version_string . " " . $tmpdir . $filename . ".java");
    $result = file_get_contents($tmpdir . $filename . ".class");

    unlink($tmpdir . $filename . ".java");
    unlink($tmpdir . $filename . ".class");
  }
	else
	{
		$output = "An unexpected error occurred while compiling the code.";
	}

	return new RequestReturn($output, $result);
}

# Compile a given file with the given source
# code and extra arguments using Clang
#  text: The C++ or C source code
#  extargs: Extra args for the compiler
function compileFileWithClang($extargs, $ext = ".cpp") {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if(file_put_contents($filename . $ext)) {
  	$output .= shell_exec("./emcc -O3 -Wall " . $filename . $ext . " -o " . $filename . ".bc" . $extargs);
  	$output .= shell_exec("./emcc -O3 " . $filename . ".bc -o " . $filename . ".js");
		$output .= minifyJS($filename . ".js");

		$result = file_get_contents($filename . ".js");

  	unlink($filename . $ext);
  	unlink($filename . ".bc");
  	unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result)
}

function compileHaskellFile($text) {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if (file_put_contents($filename . ".hs"))
	{
		$output .= shell_exec("ghcjs " . $filename . ".hs -o " . $filename . ".js");
		$output .= minifyJS($filename . ".js");

		$result = file_get_contents($filename . ".js");

		unlink($filename . ".hs");
		unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result);
}

function compileTypeScript($text) {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if (file_put_contents($filename . ".ts"))
	{
		$output .= shell_exec("tsc " . $filename . ".ts");

		$result = file_get_contents($filename . ".js");

		unlink($filename . ".ts");
		unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result);
}

function compileCoffeescript($text) {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if (file_put_contents($filename . ".coffee")) {
		$output .= shell_exec("coffee -o " . $tmpdir . " -c " . $filename);

		$result = file_get_contents($filename . ".js");

		unlink($filename . ".coffee");
		unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result);
}

function compilePython3($text) {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if (file_put_contents($filename . ".py")) {
		$output .= shell_exec("pyjsbuild " . $filename . ".py -o " . $filename  . ".js");

		$result = file_get_contents($filename . ".js");

		unlink($filename . ".py");
		unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result);
}

function compileCOBOL($text, $dialect) {
	$tmpdir = sys_get_temp_dir();
	$output = "";
	$result = "";
	$filename = $tmpdir . generateRandomString();

	if (file_put_contents($filename . ".cbl")) {
		$output .= shell_exec("cobc -C -Wall " . $filename . ".cbl -o " . $filename . ".c");
		$output .= shell_exec("emcc -O3 " . $filename . ".c -o " . $filename . ".bc");
		$output .= shell_exec("emcc -O3 " . $filename . ".bc -o " . $filename . ".js");

		$result = file_get_contents($filename . ".js");

		unlink($filename . ".cbl");
		unlink($filename . ".c");
		unlink($filename . ".bc");
		unlink($filename . ".js");
	}
	else {
		$output .= "An unexpected error occurred while compiling the code.";
		$result = NULL;
	}

	return new RequestReturn($output, $result);
}
//
function compileUserFile($reqval)
{
	switch ($reqval->lang) {
		case "C++14":
			return compileFileWithClang($reqval->text, "-std=c++14");
		case "C++11":
			return compileFileWithClang($reqval->text, "-std=c++11");
		case "C++98":
			return compileFileWithClang($reqval->text, "");
		case "C++1z": # NOTE: When C++1z is published this option must be changed
			return compileFileWithClang($reqval->text, "-std=c++1z");
		case "C89":
			return compileFileWithClang($reqval->text, "-std=c89", ".c");
		case "C99":
			return compileFileWithClang($reqval->text, "-std=c99", ".c");
		case "C11":
			return compileFileWithClang($reqval->text, "-std=c11", ".c");
		case "C94":
			return compileFileWithClang($reqval->text, "-std=c94", ".c");
		case "Java 1.3":
			return compileJavaFile($reqval->text, "1.3");
		case "Java 1.4":
			return compileJavaFile($reqval->text, "1.4");
		case "Java 1.5":
			return compileJavaFile($reqval->text, "1.5");
		case "Java 1.6":
			return compileJavaFile($reqval->text, "1.6");
		case "Java 1.7":
			return compileJavaFile($reqval->text, "1.7");
		case "Objective-C++":
			return compileFileWithClang($reqval->text, "", ".mm");
		case "Objective-C":
			return compileFileWithClang($reqval->text, "", ".m");
		case "Haskell":
			return compileHaskellFile($reqval->text);
		case "CoffeeScript":
			return compileCoffeeScript($reqval->text);
		case "TypeScript":
			return compileTypeScript($reqval->text);
		case "COBOL":
			return compileCOBOL($reqval->text, "default");
		default:
			# An unknown language was passed
			# this is an error
			break;
	}
}
?>
