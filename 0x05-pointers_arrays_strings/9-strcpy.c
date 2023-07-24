#include "main.h"

/**
 * _strcpy  - takes string and put string to another variable
 *
 * @dest: char paramter
 * @src: char paramter
 *
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	putchar ('\n');
}
