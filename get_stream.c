#include "monty.h"

var_t *var_ptr = NULL;

/**
 * end_get_stream - Handles the error when reading the file fails
 * @failedfile: The file that didn't open
 */

void end_get_stream(char *failedfile)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", failedfile);
	free_var_ptr();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - reads the file
 * @failedfile: file to open and set as the stream
 */

void get_stream(char *failedfile)
{
	int fd;

	fd = open(failedfile, O_RDONLY);
	if (fd == -1)
		end_get_stream(failedfile);

	var_ptr->file_ptr = fdopen(fd, "r");
	if (var_ptr->file_ptr == NULL)
	{
		close(fd);
		end_get_stream(failedfile);
	}
}
