#include "monty.h"

/**
 * free_arguments - free arguments
 */

void free_arguments(void)  
{
	if (arguments != NULL) 
	{
        if (arguments->file_stream != NULL)
	{
		fclose(arguments->file_stream);
		arguments->file_stream = NULL;
        }
        free(arguments);
        arguments = NULL; 
    }
}
