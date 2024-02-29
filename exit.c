#include "shell.h"

/**
 * free_array - frees an array
 * @args: pointer array
 */
void free_array(char **args)
{
	int h;

	if (args)
	{
		for (h = 0; args[h]; h++)
			free(args[h]);
		free(args);
	}
}

/**
 * Exit_Command - function to handle the exit builtin command
 * @cmd: command input by the user
 * @line: command input buffer
 * @status: command status
 * Return: exit status
 */
int Exit_Command(char **cmd, char *line, int status)
{
	int exit_Status, c;

	if (cmd[1] == NULL)
	{
		free_array(cmd);
		free(line);
		exit(status);
	}
	for (c = 0; cmd[1][c]; c++)
	{
		if (isdigit(cmd[1][c]) == 0)
		{
			free_array(cmd);
			return (1);
		}
	}
	exit_Status = _atoi(cmd[1]);
	free_array(cmd);
	free(line);
	exit(exit_Status);
}

