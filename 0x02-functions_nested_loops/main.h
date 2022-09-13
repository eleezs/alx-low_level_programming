#include <stdio.h>
void print_alphabet(void);

void print_alphabet(void)
{
	char c = 'a';

	for (c ='a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
}
