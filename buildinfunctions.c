#include "main.h"
/**
 *exit_shs - our exit function
 *Return: 0
 */

int exit_shs(void)
{
printf("this is the exit function\n");
return (0);
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
return (0);
}
/**
*cd_shs - our cd function
*Return: 0
*/

int cd_shs(void)
{
printf("this is the cd function\n");
return (0);
}
/**
*help_shs - our help function
*Return: 0
*/

int help_shs(void)
{
printf("this is the help function\n");
return (0);
}
