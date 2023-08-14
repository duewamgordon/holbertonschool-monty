#include "monty.h"

/**
 * delete_stack_node - deletes head node
 * Return: void
 */

void delete_stack_node(void)
{
	stack_t *temp;

	temp = arguments->head;
	argumetns->head = temp->next;
	free(temp);
}
