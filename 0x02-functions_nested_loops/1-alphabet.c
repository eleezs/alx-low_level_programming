#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

int print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
}
