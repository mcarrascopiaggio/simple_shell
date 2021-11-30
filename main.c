#include "main.h"

/**
 *prompt - dislplay a promp in the therminal
 *Return: 0
 */


int prompt(void)
{
int first_time = 1;
char *clear_string = "'\0'"; /** ver si funciona*/

if (isatty(STDIN_FILENO) == 1) /**isatty() returns 1 if fd is an open file descriptor referring to a terminal;*/
{
	if (first_time == 1)
	{
	write(STDOUT_FILENO, clear_string, 1);
	first_time = 0;
	}
	write(STDOUT_FILENO, "$  ", 4);
}
return (0);
}

/**
*_read - read the line
*Return: return the number of characters read
*/

int _read(void)
{
char *line = NULL;
size_t len = 0;
size_t nread;
int i = 0;

line = malloc(sizeof(char) * 1024);
if (line == NULL)
	return (0);

nread = getline(&line, &len, stdin);
if ((int)nread == -1)
{
	perror("Read Error");
	free(line);
}
for (i = 0; line[i] != '\0'; i++)
	{
	;
	}
line[i - 1] = '\0';
/*write(1, line, 1024);*/
free(line);
return (nread);
}

/**
*main - simple shell
*@ac: number of argumnets
*@av: vector of arguments
*@env: enviorment variables
*Return: 0
*/

int main(int ac, char **av, char **env)
{
(void)ac;
(void)av;
(void)env;

while (1)
{
prompt();
_read();

}
return (0);
}
