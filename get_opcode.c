#include "monty.h"

/**
 * get_opcode - instructions for opcodes
 */

void get_opcode(void)
{
	int d = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pall", &pall},
		{NULL, NULL}
	};

	if (arguments->num_tok == 0)
		return;
	
	for (; instructions[d].opcode != NULL; d++)
	{
		if (strcmp(instructions[d].opcode, arguments->tok[0]) == 0)
		{
			arguments->line_instruc->opcode = instructions[d].opcode;
			arguments->line_instruc->f = instructions[d].f;
			return;
		}
	}
	handle_invalid_instruction();
}
