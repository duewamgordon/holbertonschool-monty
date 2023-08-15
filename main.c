#include "monty.h"

arg_t *arguments = NULL;

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
	init_arg();
	get_stream(argv[1]);

	while (getline(&arguments->text_line, &n, arguments->file_stream) != -1)
	{
		arguments->line_number +=1;
		token_break();
		get_opcode();
		run_opcode();
		free_tok();
	}
	
	close_stream();
	free_arguments();

	return 0;
}
