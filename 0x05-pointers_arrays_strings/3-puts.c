#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 *
 * by a new line, to stdout.
 *
 * @s: The string
 *
 * Return: Nothing
 *
 */

void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
