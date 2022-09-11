#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[100] = "abcdefghijklmnopqrstuvwxyz";

	int leng;

	int g;

	leng = strlen(c);

	for (g = leng - 1; g >= 0; g--)
	{
		putchar(c[g]);
	}

	putchar('\n');
	return (0);
}
