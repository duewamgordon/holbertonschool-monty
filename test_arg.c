#include "monty.h"

/**
 * test_arg - Checks number of command line arguments
 * @argc: Number of command line arguments
 */

void test_arg(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
