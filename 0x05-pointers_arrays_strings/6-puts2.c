#include "main.h"
#include <string.h>
/**
 * puts2 - prints evey other character in
 * the string starting with the first
 * @str - a variable which is an argument
 * Return: 0
 */
void puts2(char *str)
{
	int n;
	int len;

	len = strlen(str);
	for (n = 0; n < len; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
