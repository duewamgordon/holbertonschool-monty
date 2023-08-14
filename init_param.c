#include "monty.h"

/**
 * init_param - initialize a pointer to var_s
 */

void init_param()
{
	var_ptr = malloc(sizeof(var_t));
	if (var_ptr == NULL)
		end_malloc();

	var_ptr->line_instruc = malloc(sizeof(instruction_t));
	if (var_ptr->line_instruc == NULL)
		end_malloc();

	var_ptr->file_ptr = NULL;
	var_ptr->text_line = NULL;
	var_ptr->line_number = 0;
	var_ptr->num_tok =0;
}
