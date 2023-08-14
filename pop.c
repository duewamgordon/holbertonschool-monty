#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the stack's top element.
 * @line_number: Line number being executed.
 */
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *temp;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = *stack;
    *stack = (*stack)->next;
    if (*stack != NULL)
        (*stack)->prev = NULL;

    free(temp);
}
