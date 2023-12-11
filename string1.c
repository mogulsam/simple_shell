#include "shell.h"

/**
 * _strcpy - this function does copies theh string
 * @dest: the destinationb of the string
 cjgjc bnnb 
 * @src: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = 0;
	return (dest);
}

/**
 * _strdup - duplicates thev of a string
 * @str: the string to duplicate
 *
 * Return: pointer to the 
 	qgdjkd
 qwvj to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - prints an input string
 *@str: the string that will be to be printed
 *hfedhfdh
 * Return: Nothing will be in the string 
 */
void _puts(char *str)
{
	int k = 0;

	if (!str)
		return;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
}

/**
 * _putchar - writes the character c thT stands out to stdout to stdout
 * @c: The character to print
 *hahahahaahah
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int k;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || k >= WRITE_BUF_SIZE)
	{
		write(1, buf, k);
		k = 0;
	}
	if (c != BUF_FLUSH)
		buf[k++] = c;
	return (1);
}
