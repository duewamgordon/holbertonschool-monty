#include "monty.h"

/**
 * free_args - free allocated mem for args
 */

void free_args (void)
{
	close_stream();
	free_tok();
	free_arguments();
}
