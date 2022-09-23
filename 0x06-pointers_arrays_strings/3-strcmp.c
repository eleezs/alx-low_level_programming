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
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}

		if (s2[i] > s1[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
