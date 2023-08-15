#include "monty.h"

/**
 * token_break - breaks the line into individual words
 */

void token_break(void)
{
	int d = 0;
	char *delim = "\n", *token = NULL, *lncpy = NULL;

	lncpy = malloc(sizeof(char) * (strlen(arguments->text_line) + 1));
	strcpy(lncpy, arguments->text_line);
	arguments->num_tok = 0;
	token = strtok(lncpy, delim);
	while (token)
	{
		arguments->num_tok += 1;
		token = strtok(NULL, delim);
	}

	arguments->tok = malloc(sizeof(char *) * (arguments->num_tok + 1));
	strcpy(lncpy, arguments->text_line);
	token = strtok(lncpy, delim);

	while (token)
	{
		arguments->tok[d] = malloc(sizeof(char) * (strlen(token) + 1)); 
		if(arguments->tok[d] == NULL)
			end_malloc();
		strcpy(arguments->tok[d], token);
		token = strtok(NULL, delim);
		d++;
	}
	arguments->tok[d] = NULL;
	free(lncpy);
}
