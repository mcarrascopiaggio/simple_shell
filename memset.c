#include "main.h"

/**
*_memset - prints buffer in hexa.
*@s: the address of memory to print.
*@n: the size of the memory to print.
*@b: the constant value.
*Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
