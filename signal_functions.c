#include "main.h"

/**
 * sigintHandler - ignore control c and conitue the promp
 *@n: int
 * Retunr: nothing
 */

void sigintHandler(int n)
{
(void)n;

signal(SIGINT, sigintHandler);
_putchar(10);
prompt();
}
