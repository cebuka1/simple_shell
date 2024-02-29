#include "shell.h"

/**
 * _strncat - this function concatenates two strings
 * @dest: string destination
 * @src: string source
 * @n: number of nytes to append
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int h, s;

	h = 0;
	while (dest[h] != '\0')
	{
		h++;
	}
	for (s = 0; src[s] != '\0' && n > 0; s++, s--, h++)
	{
		dest[h] = src[s];
	}
	return (dest);
}

/**
 * _strncpy - this function copies n bytes of a string
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to be copied
 * Return: zero
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];

	for (; n > c; c++)
		dest[c] = '\0';

	return (dest);
}

/**
 * _strcpy - this function copies the string pointed
 * to by src
 * @dest: string destination
 * @src: string source
 * Return: zero
 */

char *_strcpy(char *dest, char *src)
{
	int len, e;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (e = 0; e < len; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';
	return (dest);
}

/**
 * _strcat - this function concatenates two strings
 * @dest: string destination
 * @src: string source
 * Return: zero
 */

char *_strcat(char *dest, char *src)
{
	int m, x;

	m = 0;
	while (dest[m] != '\0')
		m++;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[m] = src[x];
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
