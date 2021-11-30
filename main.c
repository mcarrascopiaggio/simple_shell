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
(void)ac;
(void)av;
(void)env;

while (1)
{
prompt();
line = _read();
printf("%s\n", line);
}
return (0);
}
