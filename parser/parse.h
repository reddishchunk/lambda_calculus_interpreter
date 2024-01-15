#ifndef PARSE_H
#define PARSE_H

#include "token.h"
#include "ast.h"
#include "data.h"


Token arith[] = {add, sub, mul, div, mod};
Token list[] = {lsqbr, rsqbr};
Token 

int is_terminal(TokenType t) {
	if (t == '\n' || t == EOF || t


#endif
