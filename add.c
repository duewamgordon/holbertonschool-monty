#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the stack's top element.
 * @line_number: Line number being executed.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp1, *temp2;

	(void) stack;
	
	if (arguments->stack_len < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}
	
	temp1 = arguments->head;
	temp2 = temp1->next;

	temp2->n = temp1->n + temp2->n;
	delete_stack_node();

	arguments->stack_len -= 1;
}
