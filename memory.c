#include "shell.h"

/**
 * bfree free a pointer and NULLs the addr
 * @ptr: addr of the pointer to free
 *
 * Ret: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

