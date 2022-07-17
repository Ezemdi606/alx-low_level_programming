#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: The string
 *
 */

void rev_string(char *s)
{

	int l1, x;

	l1 = 0;
	x = 0;
	while (s[l1] != '\0')
		l1++;
	
	x = strrev(l1);
	return (x);
}
