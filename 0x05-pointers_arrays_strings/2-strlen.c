#include "main.h"
/**
 * _strlen - calculates string length
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	if (s)
	{
		while (*(s + x))
			++x;
	}
	return (x);
}
