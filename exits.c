#include "shell.h"
/**
 * _strncpy - Copies a portion of a string.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * @n: The number of characters to copy.
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - concatenates two strings
 * @dest: the first str
 * @src: the sec str
 * @n: the amount of bytes to be maximally used
 * Return: the concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * _strchr locates a char in a string
 *
 * @s: the string to be parsed
 * @c: the char to look for
 * Ret: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

