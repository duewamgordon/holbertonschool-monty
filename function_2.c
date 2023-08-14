#include "monty.h"

/**
 * handle_invalid_instruction - Handles instruction errors
 */
void handle_invalid_instruction(void)
{
    dprintf(2, "L%d: unknown instructions %s\n", arguments->line_number, arguments->tok[0]);
    close_stream();
    free_tok();
    free_args();
    exit(EXIT_FAILURE); 
}
