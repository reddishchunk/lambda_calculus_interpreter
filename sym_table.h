#ifndef SYM_TABLE_H
#define SYM_TABLE_H

typedef struct sym_node;
struct sym_node {
	char *ident;
	char *def;
	sym_node *next;
};

sym_node *sym_table;	//append here

sym_node *init_sym_table(char *ident, char *def);
sym_node* add_node(sym_node *head, char *ident, char *def);

#endif
