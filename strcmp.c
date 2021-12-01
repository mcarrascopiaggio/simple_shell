#include "main.h"

/**
*_strcmp - swaps values
*@s1: string 1
*@s2: string 2
*Return: Always 0.
*/


int _strcmp(char *s1, char *s2)
{
int i;
int d;

for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
{
	d = s1[i] - s2[i];
	if (d != 0)
	{
		break;
	}
}
return (d);
}
