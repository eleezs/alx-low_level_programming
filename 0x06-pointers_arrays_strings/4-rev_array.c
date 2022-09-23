#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function name
 * @a: argument
 * @n: argument
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{
		for (i = n - 1; i >= 0; --i)
		{
			return (a[i]);
		}
	}
}
