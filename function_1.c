#include "monty.h"

/**
 * free_var_t - free memory
 */

void free_var_ptr(void)  
{
	if (var_ptr != NULL) 
	{
        if (var_ptr->file_ptr != NULL)
	{
		fclose(var_ptr->file_ptr);
		var_ptr->file_ptr = NULL;
        }
        free(var_ptr);
        var_ptr = NULL; 
    }
}

