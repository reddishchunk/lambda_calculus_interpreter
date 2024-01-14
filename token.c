/* LICENSE: MPL2.0 (SEE LICENSE FILE FOR MORE INFORMATION)
 * AUTHOR: reddishchunk
 * DATE: 2024/01/13
 */

#include "token.h"

token_list* append_token_node(TokenType ttype, char *lexeme, long line_num,
                short offset) {
        token_list *n = (token_list*)malloc(sizeof(token_list));
        n->ttype = ttype;
        n->lexeme = lexeme;
        n->line_num = line_num;
        n->offset = offset;
        n->next = NULL;
}

void dealloc_token_list(token_list **head) {
	token_list *prev = *head;
	while (*head->next != NULL) {
		*head = *head->next;
		free(prev);
	}
	free(*head);
}
