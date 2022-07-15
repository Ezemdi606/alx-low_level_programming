#include "main.h"

#include <stdio.h>

/**
 * main - check the code
 *
 *
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	char a[] = "Hello";
	char b[] = "World!";
	
	printf("%d\n", _strcmp(a, b));
	printf("%d\n", _strcmp(b, a));
	printf("%d\n", _strcmp(a, b));
	return (0);
}
