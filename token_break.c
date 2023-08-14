#include "monty.h"

/**
 * token_break - breaks the line into individual words
 */

void token_break(void)
{
	int d = 0;
	char *delims = "\n", *token = NULL, *lncpy = NULL;

	lncpy = malloc(sizeof(char) * (strlen(var_ptr->text_line) + 1));
	strcpy(lncpy, var_ptr->text_line);
	var_ptr->num_tok = 0;
	token = strtok(lncpy, delims);
	while (token)
	{
		var_ptr->num_tok += 1;
		token = strtok(NULL, delims);
	}

	var_ptr->tok = malloc(sizeof(char *) *
			(var_ptr->num_tok +1));
	strcpy(lncpy, var_ptr->text_line);
	token = strtok(lncpy, delims);

	while (token)
	{
		var_ptr->tok[d] = malloc(sizeof(char) * (strlen(token) + 1)); 
		if(var_ptr->tok[d] == NULL)
			end_malloc();
		strcpy(var_ptr->tok[d], token);
		token = strtok(NULL, delims);
		d++;
	}
	var_ptr->tok[d] = NULL;
	free(lncpy);
}
