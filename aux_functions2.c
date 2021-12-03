#include "main.h"


/**
*_free - free a two dimensial array
*@tok: base array
*/

void _free(char **tok)
{
int i = 0;

for (i = 0 ; tok[i] != NULL; i++)
{
	free(tok[i]);
}
free(tok);
}

/**
 *exec_path - checks fro comand and execute
 *@tok: vector of comand and arguments
 *@path: array of dir
 *Return: pointer to the full path
 */

char **exec_path(char **tok, char **path)
{
	int i = 0;
	int tmp = 0;
	char *concat = NULL;
	/* add malloc for each case*/
	for (i = 0; path[i] != NULL; i++)
	{
		concat = _strcat(path[i], tok[0]);
		printf("%s\n", concat);
		tmp = access(concat, X_OK);
		if (tmp == 0)
		{
			break;
		}
		/* add else */
		tok[0] = concat;
	}
return (tok);
}
