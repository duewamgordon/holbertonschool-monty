#include "monty.h"

/**
 * free_head_node - frees memory in the head node 
 */

void free_head_node(void)
{
	if (arguments->head)
		free_stack(arguments->head);
	arguments->head = NULL;
}
