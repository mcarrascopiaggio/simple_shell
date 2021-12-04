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
	int aux = 1;
	int i = 0;
	char *tok = NULL;
	char **tokarray = NULL;
	/** count the bytes in fist word of line */
	aux = count_to_sep(line, " ");
	/** allocate dinamic memory fo first tok*/
	tokarray[0] = malloc(sizeof(char) * aux);
	/**check correct allocation*/
	if (!tokarray[0])
	{
		free(tokarray[0]);
		exit(3);
	}
	/** save first tok*/
	tok = strtok(line, sep);
	tokarray[0] = tok;
	while (tok != NULL)
	{
		if (i != 0)
		{
			tok = strtok(NULL, sep);
			tokarray[i] = malloc(sizeof(char) * _strlen(tok));
			tokarray[i] = tok;
		}
		i++;
	}
	tokarray[i] = NULL;
	if (line)
		free(line);
	return (tokarray);
}

/**
 *prompt - dislplay a promp in the therminal
 *Return: 0
 */


int prompt(void)
{
	write(STDOUT_FILENO, "$  ", 4);
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
	line[i - 1] = '\0';
/**free(line); hay que liberarla mas tarde*/
return (line);
}
