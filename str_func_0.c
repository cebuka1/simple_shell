#include "shell.h"

/**
 * _strncmp - this function compares two strings
 * @s1: first string input to be compared
 * @s2: second string input to be compared
 * @n: number of characters to be compared
 * Return: 0 if strings are equal to n, else 1.
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t x;

	for (x = 0; (s1[x] != '\0' || s2[x] != '\0') && x < n; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

/**
 * _strcmp - this function compares two strings
 * @s1: first string input
 * @s2: second string input
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y] != '\0' || s2[y] != '\0'; y++)
	{
		if (s1[y] != s2[y])
			return (s1[y] - s2[y]);
	}
	return (0);
}

/**
 * _strlen - this function returns the lenght of a string
 * @s: string variable
 * Return: 0
 */

int _strlen(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
		;

	return (z);
}

/**
 * _strdup - this function duplicates a string
 * @string: the string tio duplicate
 * Return: pointer to the string duplicated
 */

char *_strdup(const char *string)
{
	int length = 0;
	char *ren;

	if (string == NULL)
		return (NULL);
	while (*string++)
		length++;
	ren = malloc(sizeof(char) * (length + 1));
	if (!ren)
		return (NULL);
	for (length++; length--;)
		ren[length] = *--string;
	return (ren);
}

