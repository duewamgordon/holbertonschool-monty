#include "monty.h"

/**
 * token_break - breaks the line into individual words
 */

void token_break(void)
{
	int d = 0;
	char *delims = " \n", *token = NULL, *lncpy = NULL;

	lncpy = malloc(sizeof(char) * (strlen(arguments->text_line) + 1));
	strcpy(lncpy, arguments->text_line);
	arguments->num_tok = 0;
	token = strtok(lncpy, delims);
	while (token)
	{

		arguments->num_tok += 1;
		printf("%s", token);
		token = strtok(NULL, delims);
	}

	arguments->tok = malloc(sizeof(char *) * (arguments->num_tok + 1));
	strcpy(lncpy, arguments->text_line);
	token = strtok(lncpy, delims);

	while (token)
	{
		arguments->tok[d] = malloc(sizeof(char) * (strlen(token) + 1)); 
		if(arguments->tok[d] == NULL)
			end_malloc();
		strcpy(arguments->tok[d], token);
		token = strtok(NULL, delims);
		d++;
	}
	arguments->tok[d] = NULL;
	free(lncpy);
}
