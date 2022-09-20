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

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i - 1) % 2 != 0)
	{
		int n = (i - 1) / 2;

		_putchar (str[n]);
	}

	length = (i - 1) / 2;

	int j = 0;

	j = length;

	while (j != 0)
	{
		_putchar (str[length]);
		length++;
		--j;

	}
	_putchar ('\n);

}
