#include "monty.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: A pointer to an array of the command line arguments
 *
 * Description: Print 
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	size_t n = 0;

	test_arg(argc);
	init_param();
	end_get_stream(argv[1]);

	while (getline(&var_ptr->text_line, &n, var_ptr->file_ptr) != -1)
	{
		var_ptr->line_number +=1;
		token_break();
		get_opcode();
		run_opcode();
		free_tok();
	}
	
	close_stream();
	free_var_ptr();

	return 0;
}
