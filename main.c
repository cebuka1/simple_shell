#include "shell.h"

/**
 *  main - program stats
 *  Return: program
 */
int main(void)
{
	char *line = NULL, **token_arr, *prompt;
	int mode_t = isatty(STDIN_FILENO);
	int exit_Status = 0;
	size_t size = 0;
	ssize_t nchars_read;

	while (1)
	{
		prompt = "HA-SHELL:~$ ";
		if (mode_t == 1)
			_printstr(prompt);
		nchars_read = getline(&line, &size, stdin);
		if (nchars_read == -1)
		{
			if (mode_t == 1)
				_putchar('\n');
			break;
		}
		if (line[nchars_read - 1] == '\n')
			line[nchars_read - 1] = '\0';

		token_arr = string_token(line, " \t");
		if (token_arr[0] == NULL)
		{
			free(token_arr);
			continue;
		}
		exit_Status = builtin(token_arr, line, exit_Status);
		if (exit_Status == 1)
			exit_Status = validate(token_arr, line);
	}
	free(line);
	return (exit_Status);
}
