#include <stdio.h>

/**
 * main -prints all the alphabets in lowercase,
 * followed by a new line
 * Retun: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	
	putchar('\n');
	return (0);
}
