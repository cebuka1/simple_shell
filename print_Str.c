#include "shell.h"

/**
 * _putchar - this function writes character to stdout
 * @c: character to be printed
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printstr - this function prints character strings
 * @str: character pointer pointing to char
 * Return: character string
 */

void _printstr(const char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
		_putchar(str[h]);
}
