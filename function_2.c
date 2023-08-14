#include "monty.h"

/**
 * handle_invalid_instruction - Handles instruction errors
 */
void handle_invalid_instruction(void)
{
    dprintf(2, "L%d: unknown instruction %s\n", 
		    arguments->line_number, arguments->tok[0]);
  
    free_arguments();
    exit(EXIT_FAILURE); 
}
