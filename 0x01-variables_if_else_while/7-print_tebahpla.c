#include <stdio.h>

/**
 * main - entry point
 * Description: Print lower case alphabet backwards
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'r'; c >= 'a'; --c)
		putchar(c);

	putchar('\n');

	return (0);
}
