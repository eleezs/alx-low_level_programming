#include "main.h"
#include <stdio.h>

/**
 * rev_string - function name
 * @s: argument
 * Return: success
 */
void rev_string(char *s)
{
	int i;

	char *c = "";

	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; --i)
	{
		for (j = 0; j <= i - 1; j++)
		{
			c[j] = s[i];
		}
	}
}
