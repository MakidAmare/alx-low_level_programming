#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means our answer iss correct
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putschar (c[m]);
	}
	_putschar('\n');
}
