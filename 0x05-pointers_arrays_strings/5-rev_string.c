#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string
 *
 */

void rev_string(char *s)

{
	char sw;
	int x, a, b;

	a = 0;
	b = 0;
	while (s[a] != '\0')
		a++;
	b = a - 1;
	for (x = 0; x < a / 2; x++)
	{
		sw = s[x];
		s[x] = s[b];
		s[b] = sw;
		b -= 1;
	}
}
