#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: argument
 * @n: argument
 * Return: always
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n)
		{
			printf(", ");
		}
	}
}
