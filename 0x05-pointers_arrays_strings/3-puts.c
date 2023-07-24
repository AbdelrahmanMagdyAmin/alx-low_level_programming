#include "main.h"

/**
 * _puts - it print string followed by new line
 *
 * @str: char paramter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	putchar('\n');
}
