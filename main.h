#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int prompt(void);
char *_read(void);
char **token(char *line, char *sep);
void exec(char **tok, char **av, char **env);
#endif
