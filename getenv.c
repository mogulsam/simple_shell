#include "shell.h"

/**
 * get_environ - returns the string array copy of our environment kjegbV 
 * @info: Structure thet are containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0, otherwise will returun  null
 */
char **get_environ(info_t *info)
{
	if (!info->environ || info->env_changed)
	{
		info->environ = list_to_strings(info->env);
		info->env_changed = 0;
	}

	return (info->environ);
}

/**
 * _unsetenv - Remove an environment variablevbbfqjdgqjfvh
 * @info: Structure containing potential arguments. Used  ewgjwmgn to maintain
 *        constant function prototype.webkgljmwe
 *  Return: 1 on delete, 0 otherwisewrgn ,weg
 * @var: the string env var propertywgk,nq 
 */
int _unsetenv(info_t *info, char *var)
{
	list_t *node = info->env;
	size_t h = 0;
	char *p;

	if (!node || !var)
		return (0);

	while (node)
	{
		p = starts_with(node->str, var);
		if (p && *p == '=')
		{
			info->env_changed = delete_node_at_index(&(info->env), h);
			h = 0;
			node = info->env;
			continue;
		}
		node = node->next;
		h++;
	}
	return (info->env_changed);
}

/**
 * _setenv - Initialize a new environment variable,
 *             or modify an existing one  egfz jsbfmjw
 * @info: Structure containing potential arguments. thet bhqw gvwhjbq  Used to maintain
 *        constant function prototype. webbgjwn,
 * @var: the string env var propertyjkwegbw .
 * @value: the string env var valuejrg,wn mbneg 
 *  Return: Always 0 , otherwise wioll return njugl.l
 */
int _setenv(info_t *info, char *var, char *value)
{
	char *buf = NULL;
	list_t *node;
	char *p;

	if (!var || !value)
		return (0);

	buf = malloc(_strlen(var) + _strlen(value) + 2);
	if (!buf)
		return (1);
	_strcpy(buf, var);
	_strcat(buf, "=");
	_strcat(buf, value);
	node = info->env;
	while (node)
	{
		p = starts_with(node->str, var);
		if (p && *p == '=')
		{
			free(node->str);
			node->str = buf;
			info->env_changed = 1;
			return (0);
		}
		node = node->next;
	}
	add_node_end(&(info->env), buf, 0);
	free(buf);
	info->env_changed = 1;
	return (0);
}
