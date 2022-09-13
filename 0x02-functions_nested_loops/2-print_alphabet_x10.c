#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Retuen: Always 0
 */
void print_alphabet_x10(void)
{
	int N;

	char c;

	while (N <= 10)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		N++;
		_putchar('\n');
	}
}
