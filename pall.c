#include "monty.h"

/**
 * pall - Prints all values on the stack
 * @stack: Pointer to the top of the stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	temp = arguments->head;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
    }
}
