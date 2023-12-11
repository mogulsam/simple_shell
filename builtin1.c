#include "shell.h"

/**
 * _myhistory - displays the list of the the history list
 *              with line numbers, starting at 0.
 * @info: Structure containing all the potential arguments. Used to maintain
 *        constant function prototype. dhgtsxzgxb
 *  Return: Always 0, otherwqise its NULL
 */
int _myhistory(info_t *info)
{
	print_list(info->history);
	return (0);
}

/**
 * unset_alias - sets alias to strings jmnmc
 * @info: parameter structuressss  jfdgrbc
 * @str: the string alias jhtghjc nv
 *
 * Return: Always 0 on success, 1 on error
 */
int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
		get_node_index(info->alias, node_starts_with(info->alias, str, -1)));
	*p = c;
	return (ret);
}

/**
 * set_alias - sets alias to strings dhdhcfbhx
 * @info: parameter to struct f hc n
 * @str: the string alias ghbcg
 *
 * Return: Always 0 on success, 1 on error
 */
int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	if (!*++p)
		return (unset_alias(info, str));

	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}

/**
 * print_alias - prints an alias string
 * @node: the alias node
 * fjkj
 * Return: Always 0 on success, 1 on errors dtgdhchnc
 */
int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
	{
		p = _strchr(node->str, '=');
		for (a = node->str; a <= p; a++)
			_putchar(*a);
		_putchar('\'');
		_puts(p + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}

/**
 * _myalias - will mimic the  the alias builtin (man alias)
 * @info: Structure containing potential arguments.gfbcdn c Used to maintain
 *          constant function prototype.ghfc bvx
 *  Return: Always 0, otherwise its null  k,ghvh
 *
 */
