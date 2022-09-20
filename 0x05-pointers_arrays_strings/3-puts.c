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

	while (i != '\0')
	{
		_putchar (c[i]);
		c++;
	}
	_putchar ('\n');
}
