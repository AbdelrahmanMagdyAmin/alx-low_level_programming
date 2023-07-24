#include "main.h"

/**
 * _strlen - take the string and return the lenght of the string
 *
 * @s: char paramter
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0,len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return len;
}	
