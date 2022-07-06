#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; 'a' <= 'z'; letter++);
	putchar(letter);
	putchar('\n');
	return (0);
}
