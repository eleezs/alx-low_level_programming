#include "main.h"

/**
 * puts2 - function name
 * @str: function name
 * Return: Success
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		if (str[i] % 2 != 0)
		{
			i++;
			continue;
		}

		_putchar (str[i]);
	}
	_putchar ('\n');
}
