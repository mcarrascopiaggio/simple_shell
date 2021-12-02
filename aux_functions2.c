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
