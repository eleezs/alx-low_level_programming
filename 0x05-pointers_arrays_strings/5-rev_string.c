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

	char c[] = "a";

	char *p = &c;

	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; --i)
	{
		*(p + j) = s[i];
		j++;
	}
}
