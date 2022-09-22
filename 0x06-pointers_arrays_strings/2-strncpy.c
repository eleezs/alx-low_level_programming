#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function name
 * @dest: argument
 * @src: argument
 * @n: argument
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
