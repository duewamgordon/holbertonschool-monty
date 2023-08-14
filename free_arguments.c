#include "monty.h"

/**
 * free_arguments - frees memory to argument pointer
 */

void free_arguments(void)
{
	if (arguments == NULL)
		return;
	if (arguments->instruction)
	{
		free(arguments->instruction);
		arguments->instruction = NULL;
	}

	free_head();

	if (arguments->command)
	{
		free(arguments->command);
		arguments->command = NULL;
	}
	free(arguments);
}
