#include "main.h"

/**
*_free - free a two dimensial array
*@tok: base array
*/

void _free(char **tok)
{
int i = 0;

for (i = 0 ; tok[i] != NULL; i++)
{
	free(tok[i]);
}
free(tok);
}


/**
*checkc - print the character where c appear..
*@s: the address of memory to new str.
*@c: the matching character.
*Return: Always 0.
*/

int checkc(char *s, char c)
{
	int i;

	i = 0;

	for (i = 0; s[i] != c && s[i] != 0; i++)
	{
	}
	if (s[i] == c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *_getenv - gets PATH value
 *Return: pointer to directories string
 */

char *_getenv(void)
{
	int i = 0, j = 0, match = 0;
	char *var = "PATH";
	char *path_list = NULL;


for (i = 0; environ[i] != NULL; i++)
{
	for (j = 0; environ[i][j] != '='; j++)
	{
		;
	}
	match = _strncmp(environ[i], var, j);
	if (match == 0)
	{
		strtok(environ[i], "=");
		path_list = (strtok(NULL, "="));
	}

}
_puts("funcion getenv ok");
return (path_list);
}

/**
 * get_op_func - function that gets right funct
 * @tok: pointer array of chars
 * Return: the function
 */

int (*get_op_func(char **tok))(int)
{


	op_t ops[] = {
		{"env", env_hsh},
		{"exit", exit_hsh},
		{"cd", cd_hsh},
		{"help", help_hsh},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!_strcmp(ops[i].op, *tok))
			return (ops[i].f);
		i++;
	}
	return (0);
}
