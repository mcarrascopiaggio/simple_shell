#include "main.h"

/**
*_strspn - print the num character with concidence.
*@s: the string to be scanned.
*@accept: the string containing the text to scaner.
*Return: number of coincidence in bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	i = 0;
	c = 0;
	j = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
			}
		}
		if (i != c - 1)
		{
			break;
		}
	}
return (c);
}
