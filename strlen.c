#include "main.h"

/**
*_strlen - lenghth of a string
*@s: parametrer one
*Return: Always 0.
*/


int _strlen(char *s)
{

int l;
int i;
l = 0;

for (i = 0; s[i] != 0 ; i++)
	{
	l = l + 1;
	}
return (l);
}
