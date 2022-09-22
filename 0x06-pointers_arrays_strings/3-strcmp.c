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
	int i, j;

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

	if (s1[i] > s2[j])
	{
		return (s1[i] - s2[j]);
	}

	if (s2[j] > s1[i])
	{
		return (s1[i] - s2[j]);
	}

	return (0);
}
