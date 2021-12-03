#include "main.h"

/**
*main - simple shell
*@ac: number of argumnets
*@av: vector of arguments
*@env: enviorment variables
*Return: 0
*/

int main(int ac, char **av, char **env)
{
	char *line = NULL;
	char **tok = NULL;
	int i = 0;
	int (*_check_build)(void);
	(void)ac;
	(void)av;
	(void)env;

while (1)
{
	prompt();
	line = _read();
	/* ad check*/
	printf("%s\n", line);
	tok = token(line, " ");

	for (i = 0; tok[i] != NULL; i++)
	{
		printf("%s\n", tok[i]);
	}
	_check_build = get_op_func(tok);
	if (_check_build == NULL)
	{
	exec(tok, line);
	}
	else
	{
	_check_build();
	}
}
return (0);
}
