


char lci_grammar[] = "lci_grammar.txt";

node *entry_grammar_heads;



load_grammar_heads():
	open lci grammar
	lex the statements into a parse tree

evaluate():

	//cycle through all entry heads
	//keep entering a layer deeper. keep track of valid sieves
	//valid sieve found when still true and next symbol is end of expression
	if (token == entry_grammar_head)
		token += next
		entrygrammarhead += next
