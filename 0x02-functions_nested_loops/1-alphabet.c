#include "main.h"

/**
 * Description: print_alphabet from a - z on _putchar function
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}