#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	int value;
	
	if( var_ptr->num_tok < 2)
	{
		fprintf(stderr, "L%u: usage: push int\n",line_number);
		exit(EXIT_FAILURE);
	}

	value = (atoi(var_ptr->tok[1]));
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

    	if (*stack != NULL)
		(*stack)->prev = new_node;
		
	*stack = new_node;
}

/**
 * pall - Prints all values on the stack.
 * @stack: Pointer to the top of the stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *current = *stack;
    

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}


