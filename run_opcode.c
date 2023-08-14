#include "monty.h"

/**
 * run_opcode - Run instructions
 */

void run_opcode(void)
{
	stack_t *stack = NULL;

	if (var_ptr->num_tok == 0)
		return;

	var_ptr->line_instruc->f(&stack, var_ptr->line_number);
}
