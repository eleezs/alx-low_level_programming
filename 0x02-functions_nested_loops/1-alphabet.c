#include <stdio.h>
#include <main.h>
void print_alphabet(void);

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

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
}
