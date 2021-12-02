#include "main.h"
/**
 *_getenv - gets enviroment var value
 *Return: pointer to directories string
 */

char **_getenv(void)
{
	int i = 0, j = 0, match = 0;
	char *var = "PATH";
	char **arr = NULL;


for (i = 0; environ[i] != NULL; i++)
{
	for (j = 0; environ[i][j] != '='; j++)
	{
		;
	}
	match = strncmp(environ[i], var, j);
	if (match == 0)
	{
		strtok(environ[i], "=");
		*arr = (strtok(NULL, "="));
		printf("ARR is %s\n", *arr);
	}

}
return (arr);
}
