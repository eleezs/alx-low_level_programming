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
	int i;

	int j = 0;

	char *c = NULL;
	
	c = malloc(sizeof(*c) * j);

	while (s[i] != '\0')
	{
		i++;
	}

	j = i;

	for (i = i - 1; i >= 0; --i)
	{
		for (j = 0; c[j]; j++)
		{
			c[j] = s[i];
		}
	}
}
