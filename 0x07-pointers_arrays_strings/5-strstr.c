#include <stdio.h>

#include <string.h>
/**
 * main - The main function
 *
 * @strstr - This function locates the string pointed to by
 * str2 in str1. When it locates the string, it will print
 * all the other strings following it.
 *
 * @str1 - The array containing the string to be scanned
 *
 * str2 - The array containing the string to be sought
 * for in str1.
 *
 * Return: 0
 */

int main(void)

{
	char str1[] = "Hello, World";
	char str2[] = "Hello";
	char *i;

	i = strstr(str1, str2);

	printf("Located: %s", i);
	return (0);
}


