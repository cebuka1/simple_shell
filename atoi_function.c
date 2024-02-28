#include "shell.h"

/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int h = 0, b = 0, c = 0, len = 0, x = 0, i = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && x == 0)
	{
		if (s[h] == '-')
			++b;

		if (s[h] >= '0' && s[h] <= '9')
		{
			i = s[h] - '0';
			if (b % 2)
				i = -i;
			c = c * 10 + i;
			x = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			x = 0;
		}
		h++;
	}

	if (x == 0)
		return (0);
	return (c);
}
