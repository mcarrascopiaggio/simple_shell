#include "main.h"
/**
*_strcat - swaps values
*@src: character source
*@dest: character destination
*Return: Always 0.
*/


char *_strcat(char *dest, char *src)
{
int l;
int i;
int j;
l = 0;

for (j = 0 ; dest[j] != 0 ; j++)
{
	l = l + 1;
}
for (i = 0 ; src[i] != 0 ; i++)
	{
	dest[l + i] = src[i];
	}
dest[l + i] = 0;
return (dest);
}

