#include "holberton.h"
/**
 * jack_bauer - Print the time of jack bauer
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i, j, k, l;

for (i = 48; i <= 50; i++)
{
	for (j = 48; j <= 57; j++)
	{
		if(i > 49 && j > 51)
			continue;

		for (k = 48; k <= 53; k++)
		{
			for (l = 48; l <= 57; l++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(k);
				_putchar(l);
				_putchar(10);
			}
		}
	}

}

}
