#include "monty.h"

/**
 * init_arg - initialize a pointer to var_s
 */

void init_arg(void)
{
	arguments = malloc(sizeof(arg_t));
	if (arguments == NULL)
		end_malloc();

	arguments->line_instruc = malloc(sizeof(instruction_t));
	if (arguments->line_instruc == NULL)
		end_malloc();

	arguments->file_stream = NULL;
	arguments->head = NULL;
	arguments->text_line = NULL;
	arguments->num_tok = 0;
	arguments->line_number = 0;
	arguments->stack_len = 0;
	arguments->stack = 1;
}
