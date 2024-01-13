/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024/01/12
 */

#include "interpreter.h"
#include "repl.h"

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		open_repl();
	} else {
		char *file_name = argv[1];
		interpret(file_name);
	}

	return 0;
}

