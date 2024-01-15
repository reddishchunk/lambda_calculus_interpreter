/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024-1-14
 */

#ifndef ERROR_GEN_H
#define ERROR_GEN_H

#include <stdio.h>

void err_out(Error e, short line, short offset) {
	printf("%s at line %i offset %i", e, line, offset);
}

#endif
