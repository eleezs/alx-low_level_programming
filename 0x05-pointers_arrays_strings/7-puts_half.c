#include "main.h"
#include <stdio.h>

/**
 * puts_half - function name
 * @str: argument
 * Return: success
 */
void puts_half(char *str)
{
	int length;

	int i = 0;

	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	length = (i + 1) / 2;

	while (j != 0)
	{
		_putchar (str[length]);
		length++;
		--j;

	}
	_putchar ('\n');

}
