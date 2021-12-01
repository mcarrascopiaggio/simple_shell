#include "main.h"

/**
*_strcpy - swaps values
*@src: character source
*@dest: character destination
*Return: Always 0.
*/


char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0 ; src[i] != 0 ; i++)
	{
	dest[i] = src[i];
	}
dest[i++] = 0;
return (dest);
}
