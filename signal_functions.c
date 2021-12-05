#include "main.h"

/**
 * sigintHandler - ignore control c and conitue the promp
 * sig_num
 * Retunr: nothing
 */

void sigintHandler(int sig_num)
{
signal(SIGINT, sigintHandler);
_putchar(10);
prompt();
}
