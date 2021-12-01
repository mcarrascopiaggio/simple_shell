#include "main.h"

/**
*_strchr - print the character where c appear..
*@s: the address of memory to new str.
*@c: the matching character.
*Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (i = 0; s[i] != c && s[i] != 0; i++)
	{
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
