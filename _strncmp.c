#include "main.h"

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
