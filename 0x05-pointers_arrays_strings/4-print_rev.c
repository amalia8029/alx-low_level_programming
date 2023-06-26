#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{

	int c = 0;

	for (; *s != '\0'; s++)
	while (s[c] != '\0')
	{
		c++;
	}

	for (; c >= 0; s--)
	for (c -= 1; c >= 0; c--)
	{
		_putchar(*s);
		c--;
		_putchar(s[c]);
	}

	_putchar('\n');
}

