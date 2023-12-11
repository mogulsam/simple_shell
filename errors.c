#include "shell.h"

/**
 *_eputs - prints an input strings  tjgmjfvjcd
 * @str: the string that will be  printed on the strinh
 *
 * Return: Nothing, absolutely no output
 */
void _eputs(char *str)
{
	int p = 0;

	if (!str)
		return;
	while (str[p] != '\0')
	{
		_eputchar(str[p]);
		p++;
	}
}

/**
 * _eputchar - writes the character c to stderr
 * @c: The character to print vfhqmfv
 *
 * Return: On success 1. wehwg
 * On error, -1 is returned, hewhw and errno is set appropriately.
 */
int _eputchar(char c)
{
	static int p;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || p >= WRITE_BUF_SIZE)
	{
		write(2, buf, p);
		p = 0;
	}
	if (c != BUF_FLUSH)
		buf[p++] = c;
	return (1);
}

/**
 * _putfd - writes the characters bfhjcnhnh c to given fd
 * @c: The character to printedc on the scresda
 * @fd: The filedescriptor to write to
 *
 * Return: On success 1. otherwise null
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int p;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || p >= WRITE_BUF_SIZE)
	{
		write(fd, buf, p);
		p = 0;
	}
	if (c != BUF_FLUSH)
		buf[p++] = c;
	return (1);
}

/**
 *_putsfd - prints an input stringers  dhjn fvgbgv
 * @str: the string to be printed on screen by the ciompiler
 * @fd: the filedescriptor to the writer  write to
 *
 * Return: the number of the  chars put
 */
int _putsfd(char *str, int fd)
{
	int p = 0;

	if (!str)
		return (0);
	while (*str)
	{
		p += _putfd(*str++, fd);
	}
	return (p);
}
