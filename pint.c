#include "monty.h"

/** 
* pint - Prints the value at the top of the stack
* @stack: Pointer to the stack's top element 
* @line_number: Line number being executed
*/ 

void pint(stack_t **stack, unsigned int line_number)

{
	(void) stack;
	if (arguments->head == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		free_args();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", arguments->head->n);
}
