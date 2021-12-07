#include "main.h"
/**
 *exit_hsh - our exit function
 *Return: 0
 */

int exit_hsh(void)
{
	return (3);
}
/**
*env_hsh - our env function
*Return: 0
*/

int env_hsh(void)
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
	}
return (1);
}
/**
*cd_hsh - our cd function
*Return: 0
*/

int cd_hsh(void)
{
	return (1);
}
/**
*help_hsh - our help function
*Return: 0
*/

int help_hsh(void)
{
	_puts("This is the help page\n");
	_puts("Here is a list of the built-in functions of this simple shell\n");
	_puts("\n");
	_puts("cd - Changes directory.\n");
	_puts("env - Display environment information.\n");
	_puts("exit - Closes the shell.\n");
	_puts("help - This page.\n");
return (1);
}
