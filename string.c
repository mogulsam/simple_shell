#include "shell.h"

/**
 * _strlen - returns the  trhe of length of a string
 * @s: the string whose frtre length to checkers
 *
 * Return: integer od ther length x length of string
 */
int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);

	while (*s++)
		n++;
	return (n);
}

/**
 * _strcmp - performs lexi-cogarphic comparison of  bpoth of the two strings between of the two strangs.
 * @s1: the first strings 
 * @s2: the second string
 *grdcjyhh
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to finder tfujfgh
 yjmb ghcjv,jvj
 hkhklbj,mfvcgh bn
 *
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer zone wcghdhchg jjhb
 jhghfvtgnfvhcd
 * @src: the source buffer
 *
 * Return: pointer to destination buffererrs
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
