#include "main.h"

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
*On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
		return (write(1, &c, 1));
}


/**
 *_strncmp - compare n bytes of string 1 with string2
 *@string1:first string
 *@string2:second string
 *@n:number of characters
 *Return: the difference of two string if 0 are equal.
 */

int _strncmp(char *string1, char *string2, int n)
{
int i = 0;
int aux1 = 0;
int aux2 = 0;

for (i = 0; ((string1[i] != 0 || string2[i] != 0) && (i < n)); i++)
{
aux1 = string1[i];
aux2 = string2[i];

if (aux1 != aux2)
	break;
}
return (aux1 - aux2);
}

/**
*_puts - lenghth of a string
*@str: parametrer one
*Return: Always 0.
*/


void _puts(char *str)
{

int i;

for (i = 0; str[i] != 0 ; i++)
	{
	_putchar(str[i]);
	}
_putchar(10);
}

/**
*_strstr - print the num character with concidence.
*@haystack: the string to be scanned.
*@needle: string to be searched with-in haystack string.
*Return: number of coincidence in bytes.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int l = 0;
	int n = 0;

	for (l = 0; needle[l] != 0; l++)
	{
		n++;
	}

	if (n == 0)
{
		haystack = haystack;
	}
	else
	{
		for (i = 0; haystack[i] != 0; i++)
		{
			for (j = 0; needle[j] != 0; j++)
			{
				if (haystack[i + j] != needle[j])
				{
				break;
				}
			}
		if (j == n)
		{
			haystack = haystack + i;
			break;
		}
		}
	}
	return (haystack);
}

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
