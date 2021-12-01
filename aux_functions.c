#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordcount - count the words using pased separator
 * @string: pointer to the string to count
 * @delim: delimiter of the words
 * Return: number of words
 */

int wordcount(char *string, char delim)
{
	int i = 0, words = 0;

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			if (string[i] == delim)
			words++;
		}
		words++;
	}
	return (words);
}
/**
*exec - exec a command with arg and env
*@tok: array of tokenized line input
*@av: vector of arguments.
*@env: acces to the enviroment variables
*Return: 0
*/

void exec(char **tok, char **av, char **env)
{
	int res;
	pid_t pid;
	(void)env;
	(void)av;

	pid = fork();

	if (pid == -1)
	{
		perror("error");
		free(tok);
		exit(3);
	}
	if (pid == 0)
	{
		res = execve(tok[0], tok, NULL);
		if (res == -1)
		{
			perror("error");
		}
		free(tok);
		exit(0);
	}
	else
	{
		wait(NULL);
	}
	free(tok);
}

/**
 *token - divide given string in tokens
 *@line: given string
 *@sep: sep character
 *Return: array of strings
 */
char **token(char *line, char *sep)
{
	int bufsize = wordcount(line, ' ');
	int i = 0;
	char *tok = NULL;
	char **tokarray = NULL;

	tokarray = malloc(sizeof(char *) * (bufsize + 1));
	if (!tokarray)
	{
		free(tokarray);
		exit(3);
	}
	tok = strtok(line, sep);
	while (tok != NULL)
	{
		tokarray[i] = tok;
		tok = strtok(NULL, sep);
		i++;
	}
	tokarray[i] = NULL;
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
