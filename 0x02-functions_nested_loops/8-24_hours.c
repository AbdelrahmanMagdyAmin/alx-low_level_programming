#include "main.h"

/**
 *jack_bauer - print every min of the day
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23 ; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hr + 48);
			_putchar(':');
			_putchar(min + 48);
			_putchar('\n');
		}
	}
}
