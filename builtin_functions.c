#include "main.h"
/**
 *exit_shs - our exit function
 *Return: 0
 */

int exit_shs(void)
{
printf("this is the exit function\n");
return (3);
}
/**
*env_shs - our env function
*Return: 0
*/

int env_shs(void)
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
	}
printf("this is the env function\n");
return (1);
}
/**
*cd_shs - our cd function
*Return: 0
*/

int cd_shs(void)
{
printf("this is the cd function\n");
return (1);
}
/**
*help_shs - our help function
*Return: 0
*/

int help_shs(void)
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
