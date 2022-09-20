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

	char *word;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i - 1) % 2 != 0)
	{
		int n = (i - 1) / 2;

		word[n] = str[n];
	}

	length = (i - 1) / 2;

	int j = length;

	while (j != 0)
	{
		word[length] = str[length];
		length++;
		--j;

	}
	return (word);

}
