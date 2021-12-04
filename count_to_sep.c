#include "main.h"

/**
 *count_to_sep - count char until find a separator
 *@s: given string
 *@sep: separator
 *Return: number of counted chars
 */
int count_to_sep(char *s, char *sep)
{
	int i = 0;

	while (s[i] != *sep)
	{
		i++;
	}
return (i);
}
