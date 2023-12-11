#include "shell.h"

/**
 **_strncpy - copies a string ewgf jfbwb 
 *@dest: the destination string to be copied to
 *@src: the source string of tghre fqwdjgfv,
 *@n: the amount of characters to be copied
 *Return: the concatenated string efwajvf n
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z, j;
	char *s = dest;

	z = 0;
	while (src[z] != '\0' && z < n - 1)
	{
		dest[z] = src[z];
		z++;
	}
	if (z < n)
	{
		j = z;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings  wgbjwbg 
 *@dest: the first string., regkjqwb<Af
 *@src: the second string.  eahfzgjbwjwef
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int z, j;
	char *s = dest;

	z = 0;
	j = 0;
	while (dest[z] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[z] = src[j];
		z++;
		j++;
	}
	if (j < n)
		dest[z] = '\0';
	return (s);
}

/**
 **_strchr - locates a character of teh dhgqcgj in a string
 *@s: the string to bevparsed hjgfqjkmb parsed
 *@c: the character to look for wqdf8whjf 
 *Return: (s) a pointer to the memsgory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
