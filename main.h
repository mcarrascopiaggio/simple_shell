#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>

extern char **environ;

#define SEP " \t\n"

/**
 *struct list_s - Node Structure
 *@str: full path
 *@next: pointer to next node
 */

typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

/**
 *struct op - Struct op
 *@op: The command enter
 *@f: The function associated
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
void _free(char **tok);
char *_getenv(void);
char **concat_path(char **tok, char *path_list);
void sigintHandler(int n);
int _free_str(char **tok, char *line);
/**buildin functions*/
int (*get_op_func(char **tok))(void);
int env_hsh(void);
int exit_hsh(void);
int cd_hsh(void);
int help_hsh(void);
/**list functions*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
/**string functions*/
int _strncmp(char *string1, char *string2, int n);
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
int wordcount(char *string, char delim);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int count_to_sep(char *s, char *sep);
#endif
