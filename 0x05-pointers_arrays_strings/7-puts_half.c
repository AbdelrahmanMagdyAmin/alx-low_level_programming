#include "main.h"

/**
 * puts_half  - takes string and print second half of string
 *
 * @str: char paramter
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int i = 0, n = 0;
	
	while (str[i] != '\0')
		i++;
	n = i / 2;
	while (n < i)
	{
		printf("%c", str[n]);
		n++;
	}
}	
