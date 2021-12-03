#include "main.h"

/**
*_strcat - concatenates two strings
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

/**
*_strcmp - swaps values
*@s1: string 1
*@s2: string 2
*Return: Always 0.
*/


int _strcmp(char *s1, char *s2)
{
int i;
int d;

for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
{
	d = s1[i] - s2[i];
	if (d != 0)
	{
		break;
	}
}
return (d);
}

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

/**
*_strlen - lenghth of a string
*@s: parametrer one
*Return: Always 0.
*/


int _strlen(char *s)
{

int l;
int i;
l = 0;

for (i = 0; s[i] != 0 ; i++)
	{
	l = l + 1;
	}
return (l);
}

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

