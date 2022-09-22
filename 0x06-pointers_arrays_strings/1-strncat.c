#include "main.h"
#include <stdio.h>
/**
 * _strncat - function name
 * @dest: argument
 * @src: argument
 * @n: argument
 * Return: success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		if (j != n)
		{
			dest[i] = src[i];
			j++;
			i++;
		}
	}

	dest[i] = '\0';
	return (dest);

}
