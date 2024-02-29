#ifndef _SHELL_H_
#define _SHELL_H_

#include <fcntl.h>
#include <errno.h>
#include <ctype.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

extern char **environ;

char *handle_path(char *args);
int Exit_Command(char **cmd, char *line, int status);
int handleEnv(char **);
void free_array(char **);
int _strlen(char *s);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char **string_token(char *, char *);
int execute_cmd(char **args, char *line);
int validate(char **args, char *line);
char *_strncpy(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
int builtin(char **args, char *cmd, int line);
int _atoi(char *);
int _putchar(char c);
char *_strdup(const char *string);
void _printstr(const char *);
char *_strncat(char *dest, char *src, int n);


#endif
