#include "main.h"

/**
 * puts2  - takes string and print each char in  string
 *
 * @str: char paramter
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i++;
	}
}
