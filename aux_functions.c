#include "main.h"
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
*@line: output of read for free after use
*Return: 0
*/

void exec(char **tok, char *line)
{
	int res;
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("error");
		free(line);
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
		free(line);
		free(tok);
		exit(0);
	}
	else
	wait(NULL);
	free(line);
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
	(void)sep;

	tokarray = malloc(sizeof(char *) * (bufsize + 1));
	if (!tokarray)
	{
		free(tokarray);
		perror("error");
		exit(3);
	}
	tok = strtok(line, SEP);
	while (tok != NULL)
	{
		tokarray[i] = tok;
		tok = strtok(NULL, SEP);
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
	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, "$  ", 4);
	}
	else
	{
		return (0);
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

	nread = getline(&line, &len, stdin);
	if ((int)nread == -1)
	{
		free(line);
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("error");
			exit(EXIT_FAILURE);
		}
	}
	for (i = 0; line[i] != '\0'; i++)
	{
		;
	}
	if (i >= 2)
	{
		line[i - 1] = '\0';
	}
	else
	{
		return (line);
	}
return (line);
}
