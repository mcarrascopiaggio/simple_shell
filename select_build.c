#include "main.h"

/**
 * get_op_func - function that gets right funct
 * @tok: pointer array of chars
 * Return: the function
 */

int (*get_op_func(char **tok))(void)
{


	op_t ops[] = {
		{"env", env_shs},
		{"exit", exit_shs},
		{"cd", cd_shs},
		{"help", help_shs},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (!strcmp(ops[i].op, *tok))
			return (ops[i].f);
		i++;
	}
	return (0);
}
