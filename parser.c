#include "shell.h"

/**
 * is_cmd - determines if a file is an executable command
 * @info: the info structutreds fq efydqjdvvf
 * @path: path to the file bqwfy wjf
 *
 * Return: 1 if true, 0 otherwise dwqhfyjeg
 */
int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

/**
 * dup_chars - duplicates characters
 * @pathstr: the PATH stringesd hqfdjwdfv bnkwyfgq
 * @start: starting index ghdfhqdjh
 * @stop: stopping index ghwd	fqyqj2eti
 *
 * Return: pointer to the bnow new new buffer
 */
char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int q = 0, k = 0;

	for (k = 0, q = start; q < stop; q++)
		if (pathstr[q] != ':')
			buf[k++] = pathstr[q];
	buf[k] = 0;
	return (buf);
}

/**
 * find_path - finds this cmd in the PATH strings dhndhhj
 * @info: the info structurs tfghxsgrthf
 * @pathstr: the PATH stringtyejyufrik bkhbjk  kin
 * @cmd: the cmd to find cghctgdhcgfvm ghc
 *
 * Return: full path of cmd if found or NULL and void
 */
char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int q = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
		return (NULL);
	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (is_cmd(info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[q] || pathstr[q] == ':')
		{
			path = dup_chars(pathstr, curr_pos, q);
			if (!*path)
				_strcat(path, cmd);
			else
			{
				_strcat(path, "/");
				_strcat(path, cmd);
			}
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[q])
				break;
			curr_pos = q;
		}
		q++;
	}
	return (NULL);
}
