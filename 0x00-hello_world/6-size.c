#include <stdio.h>

/**Explain
 *
 *
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sideof(char));
	printf("Size of an int: %lu byte(s),\n", sideof(int));
	printf("Size of a long int: %lu byte(s)\n", sideof(short));
	printf("Size of a long long int: %u byte(5)\n", sideof(long));
	printf("Size of float: %u byte(s)\n", sideof(float)); 
	return (0)
}
