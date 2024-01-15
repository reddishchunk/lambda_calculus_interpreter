/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024/01/12
 */

#ifndef AST_H
#define AST_H

typedef struct ast;
struct ast {
	ast *origin, *left, *right;
	data *in1, *in2, *out;
	int line_num, offset;
	Token token;
	char *lexeme;
};

#endif
