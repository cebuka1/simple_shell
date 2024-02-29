#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * handleEnv - function that prints the environ variables
 * @command: user command inputs
 * Return: environment variables
 */
int handleEnv(char **command)
{
	char **env;

	env = environ;
	if (command[1] != NULL)
		return (1);
	while (*env != NULL)
	{
		_printstr(*env);
		_putchar('\n');
		env++;
	}
	return (0);
}

/**
 * handle_path - function that handles full path
 * @args: command array
 * Return: 0(success)
 */
char *handle_path(char *args)
{
	char **path_arr, *temp, path[BUFSIZ];
	int a;
	struct stat status;

	temp = getenv("PATH");
	_strcpy(path, temp);
	path_arr = string_token(path, ":");
	for (a = 0; path_arr[a]; a++)
	{
		temp = malloc(sizeof(char) * (_strlen(path_arr[a]) + _strlen(args) + 2));
		if (temp == NULL)
		{
			perror("Memory not Allocated");
			break;
		}
		_strcpy(temp, path_arr[a]);
		_strcat(temp, "/");
		_strcat(temp, args);

		if (stat(temp, &status) == 0)
		{
			if (path_arr != NULL)
				free_array(path_arr);
			return (temp);
		}
		if (temp != NULL)
			free(temp);
	}
	free_array(path_arr);
	return (NULL);
}
