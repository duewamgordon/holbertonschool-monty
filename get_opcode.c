#include "monty.h"

/**
 * get_opcode - instructions for opcodes
 */

void get_opcode(void)
{
	int d = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pall", &pall},
		{"pint", &pint}, {"pop", &pop},
		{"swap", &swap}, {"add", &add},
		{"nop", &nop}, {"stack", &stack},
		{"queue", &queue}, {"pstr", &pstr},
		{"pchar", &pchar}, {"mod", &mod},
		{NULL, NULL}
	};
	if (var_ptr->num_tok == 0)
		return;

	for (; instructions[d].opcode != NULL; d++)
	{
		if (strcmp(instructions[d].opcode, var_ptr->tok[0])
				== 0)
		{
			var_ptr->line_instruc->opcode = instructions[d].opcode;
			var_ptr->line_instruc->f = instructions[d].f;
			return;
		}
	}
	handle_invalid_instruction();
}
