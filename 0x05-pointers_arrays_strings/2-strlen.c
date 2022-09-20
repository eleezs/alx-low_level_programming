#include "main.h"
#include <stdio.h>

/**
 * _strlen - main function
 * @s: argument
 * Return: len (success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
