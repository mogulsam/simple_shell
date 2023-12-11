#include "shell.h"

/**
 * **strtow - splits the  string into the words. Repeat delimiters are ignored
 * @str: the input strings vahhv 
 * @d: the delimeter stringsdf
 gfhfyyhvvvnv
 @fhkhkhknkhjhkui
 * Return: a pointer to an array of strings, or NULL on failure
 */

char **strtow(char *str, char *d)
{
	int p, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (p = 0; str[i] != '\0'; p++)
		if (!is_delim(str[p], d) && (is_delim(str[p + 1], d) || !str[p + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (p = 0, j = 0; j < numwords; j++)
	{
		while (is_delim(str[i], d))
			p++;
		k = 0;
		while (!is_delim(str[p + k], d) && str[p + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}

/**
 * **strtow2 - splits a string into words
 * @str: the input string
 * @d: the delimeter diametetr  hjfhgvkj
 hhgvhjgjjv
 * Return: a pointer uhjkhjgb to an array of strings, or NULL on failure
 */
char **strtow2(char *str, char d)
{
	int p, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (p = 0; str[p] != '\0'; p++)
		if ((str[p] != d && str[p + 1] == d) ||
		    (str[p] != d && !str[p + 1]) || str[p + 1] == d)
			numwords++;
	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (p = 0, j = 0; j < numwords; j++)
	{
		while (str[p] == d && str[p] != d)
			i++;
		k = 0;
		while (str[p + k] != d && str[p + k] && str[p + k] != d)
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[p++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}
