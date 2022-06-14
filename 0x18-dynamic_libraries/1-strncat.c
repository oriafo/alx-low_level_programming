#include "main.h"

int _strlen(char *s);

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: is a pointer to a string.
 *
 * @src: is a pointre to a string.
 *
 * @n: is an int
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = _strlen(dest), j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

return (dest);
}
