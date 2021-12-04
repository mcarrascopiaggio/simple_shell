#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

/**
 * struct op - Struct op
 *
 * @tok: The command enter
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(void);
} op_t;
int prompt(void);
char *_read(void);
char **token(char *line, char *sep);
void exec(char **tok, char *line);
void _free( char **tok);
char *_getenv(void);
char **concat_path(char **tok, char **path);
/**buildin functions*/
int (*get_op_func(char **tok))(void);
int env_shs(void);
int exit_shs(void);
int cd_shs(void);
int help_shs(void);
/**string functions*/
int _strncmp( char *string1, char *string2, int n);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
int checkc(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int wordcount(char *string, char delim);
int _putchar(char c);
void _puts(char *str);
#endif
