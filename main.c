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
char *line = NULL, **tok = NULL;
int status = 1, check_path = 0, (*_check_build)(void);
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
			if (_check_build == NULL)
			{
				check_path = checkc(line, '/');
				if (check_path == 1)
					exec(tok, line);
				else
				{
					_getenv(); /**en proceso full path*/
					_free_str(tok, line);
				}
			}
			else
			{
				status = _check_build();
				_free_str(tok, line);
			}
		}
		else
		{
			_free_str(tok, line);
		}
	}
}
return (0);
}
