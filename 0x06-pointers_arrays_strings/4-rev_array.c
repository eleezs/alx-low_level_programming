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
	int i, k;

	int j[1000];

	i = 0;

	k = 0;

	for (i = n - 1; i >= 0; --i)
	{

		j[k] =  a[i];
		k++;
	}
}
