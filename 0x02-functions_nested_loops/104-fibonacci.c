#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int count = 0;
double a = 0, b = 1, c = 0;

for (count = 0; count <= 98; count++)
{
	c = a + b;
	a = b;
	b = c;
	printf("%.0lf", c);
	if (count != 98)
		printf(", ");
}
printf("\n");
return (0);
}
