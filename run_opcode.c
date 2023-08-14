#include "monty.h"

/**
 * run_opcode - Run instructions
 */

void run_opcode(void)
{
	stack_t *stack = NULL;

	if (arguments->num_tok == 0)
		return;

	arguments->line_instruc->f(&stack, arguments->line_number);
}
