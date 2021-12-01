#include "main.h"

/**
*_memcpy - prints buffer in hexa.
*@dest: the address of memory to new srt.
*@n: the size of the memory to print.
*@src: the origin str.
*Return: Always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

return (dest);
}
