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
 *concat_path - checks fro comand and execute
 *@tok: vector of comand and arguments
 *@path: array of dir
 *Return: pointer to the full path
 */

char **concat_path(char **tok, char **path)
{
	/* len = 1 for "/"*/
	int len = 1;
	int i = 0;
	int tmp = 0;
	char *concat = NULL;

	for (i = 0; path[i] != NULL; i++)
	{
		len = strlen(path[i]) + strlen(tok[0]);
		concat = malloc(sizeof(char) * len);
		concat = _strcat(path[i], "/");
		concat = _strcat(concat, tok[0]);
		printf("%s\n", concat);
		tmp = access(concat, X_OK);
		if (tmp == 0)
		{
			tok[0] = concat;
			free(concat);
			break;
		}
		free(concat);
	}
return (tok);
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
 *_getenv - gets enviroment var value
 *Return: pointer to directories string
 */

char *_getenv(void)
{
	int i = 0, j = 0, match = 0;
	char *var = "PATH";
	char *arr = NULL;


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
		arr = (strtok(NULL, "="));
		printf("ARR is %s\n", arr);
	}

}
return (arr);
}

/**
 * get_op_func - function that gets right funct
 * @tok: pointer array of chars
 * Return: the function
 */

int (*get_op_func(char **tok))(void)
{


	op_t ops[] = {
		{"env", env_shs},
		{"exit", exit_shs},
		{"cd", cd_shs},
		{"help", help_shs},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, *tok))
			return (ops[i].f);
		i++;
	}
	return (0);
}
