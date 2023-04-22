#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>
#include <time.h>
#include <limits.h>
#include <fcntl.h>

#define COMMAND_LENGTH 100
#define MAXIMUM_ARG 70
#define MAXIMUM_ARG_LEN 120
#define MAXIMUM_PATH 20
#define BUFF_SIZE 1024

extern char **environ;

int _strcmp(char *str1, char *str2);
int get_path(char **arguments);
int getbuiltins(char **arguments, int exit_stat);
char *_getenv(char *global_var);
char *_strdup(char *str);
char *append_command(char *dir_path, char *command);
int _mprint(const char *prompt, unsigned int size);
void free_mem(char *entry);
int getcmd_inputs(char *entry, char **arguments);
int err_stat(int n);
int p_error(char **arguments, int counter);
int _putchar(char c);
int check_file(char *pathname);
int execute(char **arguments);
void free_grid(char **grid, int heigth);
int _strlen(const char *str);

#endif
