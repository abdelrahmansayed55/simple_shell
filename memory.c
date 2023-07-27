#include "shell.h"

/**
 * bfree - frees a ptr and NULLs the address
 * @ptr: address of the ptr to free
 *
 * Return: 1 if freed, 0 otherwise.
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

