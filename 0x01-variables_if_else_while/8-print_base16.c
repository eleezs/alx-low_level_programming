#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char c = 'a';

	int num = '0';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
