#include "monty.h"

/**
 * handle_invalid_instruction - Handles instruction errors
 */
void handle_invalid_instruction(void)
{
    dprintf(2, "L%d: invalid instruction encountered %s\n", var_ptr->line_number, var_ptr->tok[0]);
    close_stream();
    free_tok();
    free_var_ptr();
    exit(EXIT_FAILURE); 
}
