#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function name
 * @dest: argument
 * @src: argument
 * Return: success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
