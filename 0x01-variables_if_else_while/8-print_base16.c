#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexa[] = "123456789abcdef\n";
	unsigned int i = 0;

	while (i <= 17)
	{
		putchar(hexa[i]);
		i++;
	}
	return (0);
}
