#include "monty.h"

/**
 * close_stream - closes the file stream
 */

void close_stream(void)
{
	if (var_ptr->file_ptr == NULL)
		return;

	fclose(var_ptr->file_ptr);
	var_ptr->file_ptr = NULL;
}
