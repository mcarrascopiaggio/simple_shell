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
	(void)ac;
	(void)av;
	(void)env;

while (1)
{
	prompt();
	line = _read();
	printf("%s\n", line);
	tok = token(line, " ");

	for (i = 0; tok[i] != NULL; i++)
	{
		printf("%s\n", tok[i]);
	}
	if (line)
	{
		free(line);
	}
	exec(tok, av, env);
}
return (0);
}
