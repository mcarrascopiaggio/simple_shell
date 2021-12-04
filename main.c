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
	char *line = NULL; char *path = NULL;
	char **tok = NULL; char **tok_path = NULL;
	int i = 0;
	int status = 1, check_path = 0;
	int (*_check_build)(void);
	(void)ac;
	(void)av;
	(void)env;


while (status == 1)
{
	prompt();
	line = _read();
	printf("%s\n", line);
	tok = token(line, " ");

	for (i = 0; tok[i] != NULL; i++)
	{
		printf("%s\n", tok[i]);
	}
	_check_build = get_op_func(tok);
	if (_check_build == NULL)
	{
		check_path = checkc(line, '/');
		if (check_path == 1)
			exec(tok, line);
		else
		{
			path = _getenv();
			tok_path = token(path, ":");
			for (i = 0; tok_path[i] != 0; i++)
			{
				printf("%s\n", tok_path[i]);/**imprimimos listas de directorios*/
			}
			concat_path(tok, tok_path);
			for (i = 0; tok[i] != NULL; i++)/**da error hay que cambiar funcion concat a que copie memoria dinamica y guarde en array*/
			{
				printf("%s\n", tok[i]);
			}
		}
	}
	else
	{
	status = _check_build();
	}
}
return (0);
}
