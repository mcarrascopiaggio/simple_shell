#include "main.h"

/**
 *_free_str - free tok & line
 *@tok: array of tokens
 *@line: string of characetr generated by get line
 *Return: always 1
 */

int _free_str(char **tok, char *line)
{
free(tok);
free(line);

return (1);
}