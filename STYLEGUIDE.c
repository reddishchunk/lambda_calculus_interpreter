#define CONSTANT 123	//declare constants in all caps

int function() {	//curly bracket opens on same line as function name
	return 1;
}

enum Boolean {true, false};	//enums start with capitalization

int integer_variable;	//variable and function declarations use snake case

static int _internal_return_integer();	//functions used solely within a .c file
					//should be kept out of the .h file, 
					//set as static, and have a prefix of
					// "_" preceding the name

//line length should not exceed 80 characters, including comments. Here is #80.

