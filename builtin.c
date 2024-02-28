#include "shell.h"

/**
 * builtin - builtin handles
 * @args: command
 * @line: line
 * @status: status of the program
 * Return: 0 if builtin is found, else 1
 */
int builtin(char **args, char *line, int status)
{
	char *_builtin[] = {"exit", "env", NULL};

	if (_strcmp(_builtin[0], args[0]) == 0)
	{
		return (Exit_Command(args, line, status));
	}
	else if (_strcmp(_builtin[1], args[0]) == 0)
	{
		return (handleEnv(args));
	}
	else
		return (1);
}
