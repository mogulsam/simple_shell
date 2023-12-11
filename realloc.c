#include "shell.h"

/**
 **_memset - fills memory with a constant bytes kigej
 *@s: the pointer to the memory areajwfejf
 *@b: the byte to fill *s with ewhfuqkhbwdhk
 *@n: the amount of bytes to be filled hewv mwvewvg
 *Return: (s) a pointer to the memory area shewfvje
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
		s[q] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings inn the g	HQFJW
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to previous malloc'ated blochwqfdhJGk
 * @old_size: byte size of previous block FDQJWHFJ
 * @new_size: byte size of new blockER w q bqfnfqw
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
