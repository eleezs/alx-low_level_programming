#include "main.h"
#include <stdio.h>

/**
 * leet - function name
 * @str: argument
 * Return: success
 */

char *leet(char *str)
{
	int i, j;

	char a[] = "oOlLeEaAtT";

	char n[] = "0011334477";

	for (i = 0; str[i] != '\0'; j++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
