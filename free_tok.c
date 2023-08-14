#include "monty.h"

/**
 * free_tok - frees memory for tokens
 */

void free_tok(void)
{
	int d = 0;
	
	if (arguments->tok == NULL)
		return;

	while (arguments->tok[d])
	{
		free(arguments->tok[d]);
		d++;
	}
	free(arguments->tok);
	arguments->tok = NULL;
}	
