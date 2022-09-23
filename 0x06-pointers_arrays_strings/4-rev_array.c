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

	int j;

	i = 0;

	k = n - 1;

	for (i = 0; i < k; --k, i++)
	{

		j =  a[i];
		a[i] = a[k];
		a[k] = j;
	}
}
