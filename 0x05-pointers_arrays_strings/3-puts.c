#include "main.h"
#include <stdio.h>

/**
 * _puts - function name
 * @str: argument
 * Return: success
 */
void _puts(char *str)
{
	int i = 0;

	char *c;

	c = str;

	while (c[i] != '\0')
	{
		_putchar (c[i]);
		i++;
	}
	_putchar ('\n');
}
