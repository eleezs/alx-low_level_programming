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
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
