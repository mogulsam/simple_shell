#include "shell.h"

/**
 * bfree - frees a the hfqwjfwg hwfduk pointer and NULLs the address
 * @ptr: address of the pointer to free qwjyfdqj,/nwqlgjwqf ngwqcdh
 *
 * Return: 1 if it is freed freed, otherwise it becomes  0.
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
