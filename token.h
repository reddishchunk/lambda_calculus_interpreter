/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024/01/13
 */

#ifndef TOKEN_H
#define TOKEN_H

enum TokenType {
	//single character tokens
	lparen, rparen, lbrace, rbrace, comma, dot, semicolon,
		subtract, add, multiply, divide,
		assign,
		
	//literals
	ident, number, string

	//keywords
	lambda

	//file components
	newline, cancel_newline, eof
};

typedef struct token_list;
struct token_list {
	TokenType ttype;
	char *lexeme;
	long line_num;
	short offset;
	token_list *next;
};

token_list* append_token_node(TokenType ttype, char *lexeme, long line_num,
		short offset);

void dealloc_token_list(token_list **head);

#endif
