#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*exec - exec a command with arg and env
*@tok: array of tokenized line input
*@av: vector of arguments.
*@env: acces to the enviroment variables
*Return: 0
*/

void exec(char **tok, char **av, char **env)
{
pid_t pid;
(void)env;

pid = fork();

if (pid == -1)
{
	write(2, "error", 5);
	free(*tok);
}
if (pid == 0)
{
execve(av[0], av, NULL);
free(tok);
}
else
wait(NULL);

}
/**
 *token - divide given string in tokens
 *@line: given string
 *Return: array of strings
 */
char **token(char *line)
{
	int i = 0;
	char *tok = NULL;
	char **tokarray = NULL;

	tokarray = malloc(1024);
	if (!tokarray)
	{
		free(tokarray);
		exit(3);
	}
	tok = strtok(line, " ");
	while (tok != NULL)
	{
		tokarray[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	tokarray[i] = NULL;
	for (i = 0; tokarray[i] != NULL; i++)
	{
		printf("%s\n", tokarray[i]);
	}
return (tokarray);
}

/**
 *prompt - dislplay a promp in the therminal
 *Return: 0
 */


int prompt(void)
{
int first_time = 1;
char *clear_string = "'\0'"; /** ver si funciona*/
/**isatty() returns 1 if fd is an open file descriptor referring to a termin*/
if (isatty(STDIN_FILENO) == 1)
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

char *_read(void)
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
/**free(line); hay que liberarla mas tarde*/
return (line);
}

/**
 *main - simple shell
 *@ac: number of arguments
 *@av: vector of arguments
 *@env: enviroment
 *Return: 0
 */

int main(int ac, char **av, char **env)
{
char *line = NULL;
char **tok = NULL;
(void)ac;
(void)av;
(void)env;

while (1)
{
prompt();
line = _read();
printf("%s\n", line);
tok = token(line);
free(line);
exec(tok, av, env);
}
return (0);
}
