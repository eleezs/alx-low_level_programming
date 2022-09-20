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

	while (i != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
