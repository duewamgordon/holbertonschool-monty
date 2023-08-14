#include "monty.h"

/**
 * end_get_stream - Handles the error when reading the file fails
 * @fileName: The file to open
 */

void end_get_stream(char *fileName)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", fileName);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - reads the file
 * @fileName: file to open and set as the stream
 */

void get_stream(char *fileName)
{
	int fd;

	fd = open(fileName, O_RDONLY);
	if (fd == -1)
		end_get_stream(fileName);

	arguments->file_stream = fdopen(fd, "r");
	if (arguments->file_stream== NULL)
	{
		close(fd);
		end_get_stream(fileName);
	}
}
