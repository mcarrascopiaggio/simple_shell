#include "main.h"

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
