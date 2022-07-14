#include "main.h"
#include <string.h>
/**
 * print_rev - The function that prints a string
 * in reverse
 * @s: Argument
 * Return: Reversed string
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
