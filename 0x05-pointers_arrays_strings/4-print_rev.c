#include "main.h"

/**
 * print_rev - function name
 * @s: argument
 * Return: success
 */
void print_rev(char *s)
{
	int i = 0;

	char *c;

	int j;

	c = s;

	while (c[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; --j)
	{
		_putchar (c[i]);
	}
	_putchar ('\n');
}
