#include "monty.h"

/**
 * close_stream - closes the file stream
 */

void close_stream(void)
{
	if (arguments->file_stream == NULL)
		return;

	fclose(arguments->file_stream);
	arguments->file_stream = NULL;
}
