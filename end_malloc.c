#include "monty.h"

/**
 * end_malloc - Handles the error when malloc fails
 */

void end_malloc(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
