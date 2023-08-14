#include "monty.h"

/**
 * free_arguments - frees memory to argument pointer
 */

void free_arguments(void)
{
	if (arguments == NULL)
		return;
	if (arguments->line_instruc)
	{
		free(arguments->line_instruc);
		arguments->line_instruc = NULL;
	}

	free_head_node();

	if (arguments->text_line)
	{
		free(arguments->text_line);
		arguments->text_line = NULL;
	}
	free(arguments);
}
