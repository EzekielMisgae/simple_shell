#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>

extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern char **environ;

/**
* struct builtins - Handles builtins
* @env: First member
* @exit: Second member
* Description: builtin commands
*/

struct builtins
{
	char *env;
	char *exit;
}
builtins;

static void sig_handler(int uv);
int argc __attribute__((unused);
char **make_env(char **env);
void free_env(char **env);
int main(int argc, char **argv, char **envp);

#endif
