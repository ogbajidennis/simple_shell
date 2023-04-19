#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

int _strlen(char *s);

void execmnd(char **argv);

char *get_path_location(char *command);

#endif
