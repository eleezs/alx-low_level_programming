#include "main.h"
#include <stdio.h>

/**
 * swap_int - main function
 * @a: an argument
 * @b: an argument
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
