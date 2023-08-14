#include "monty.h"

/**
 * free_tok - frees memory for tokens
 */

void free_tok(void)
{
	int d = 0;
	
	if (var_ptr->tok == NULL)
		return;

	while (var_ptr->tok[d])
	{
		free(var_ptr->tok[d]);
		d++;
	}
	free(var_ptr->tok);
	var_ptr->tok = NULL;
}	
