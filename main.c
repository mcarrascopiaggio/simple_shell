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
	char *line = NULL; /**char *path = NULL;*/
	char **tok = NULL; /**char **tok_path = NULL;*/
	int status = 1, check_path = 0;
	int (*_check_build)(void);
	(void)ac, (void)av, (void)env;

while (status == 1)
{
	prompt();
	signal(SIGINT, sigintHandler);
	line = _read();
	if (line[0] != 0)
	{
	tok = token(line, SEP);
	if (tok[0])
	{
	_check_build = get_op_func(tok);
	printf("built");

	if (_check_build == NULL)
	{
		check_path = checkc(line, '/');
		if (check_path == 1)
			exec(tok, line);
		else
		{
			printf("funcion en proceso\n");
			/**path = _getenv();
			tok_path = token(path, ":");
			for (i = 0; tok_path[i] != 0; i++)
			{
				printf("%s\n", tok_path[i]);
			}
			concat_path(tok, tok_path);
			for (i = 0; tok[i] != NULL; i++)
			{
				printf("%s\n", tok[i]);
			}*/
		}
	}
	else
	{
		_check_build();
	}
	}
	}
}
return (0);
}
