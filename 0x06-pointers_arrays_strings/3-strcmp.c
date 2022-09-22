#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function name
 * @s1: argument
 * @s2: argument
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k;

	i = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		k = i - j;
	}
	else if (i > j)
	{
		k = i - j;
	}
	else
	{
		k = 0;
	}
	return (k);
}
