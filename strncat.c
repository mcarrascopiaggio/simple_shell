#include "main.h"

/**
*_strncat - swaps values
*@src: character source
*@dest: character destination
*@n: numbers of bytes
*Return: Always 0.
*/


char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
int j;

l = 0;

for (j = 0 ; dest[j] != 0 ; j++)
{
l = l + 1;
}
for (i = 0 ; src[i] != 0 && i < n ; i++)
	{
	dest[l + i] = src[i];
	}
dest[l + i] = 0;
return (dest);
}

