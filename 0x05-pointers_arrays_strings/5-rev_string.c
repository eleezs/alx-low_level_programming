#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - function name
 * @s: argument
 * Return: success
 */
void rev_string(char *s)
{
	char c[1000];

	int i;

	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (i = 0; i < 0; i++)
	{
		c[i] = s[j];
		j--;
	}
}
