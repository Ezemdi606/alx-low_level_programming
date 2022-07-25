#include <stdio.h>

#include <string.h>
/**
 * main - This program will demonstrate how the strchr
 * function is used.
 *
 * @strchr - This function locates a character in a string
 * and will print the rest of the string from the located
 * character.
 *
 * Return: 0
 */

int main(void)

{
	char arr[] = "This is test";
	char *ch;
	int ng = 'h';

	ch = strchr(arr, ng);

	printf("The new string is: %s\n", ch);
	return (0);
}
