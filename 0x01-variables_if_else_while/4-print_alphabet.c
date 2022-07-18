#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase followed by the alphabet
 * in uppercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char lowercase;
	
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
        if (lowercase != 'q' || lowercase != 'e')
		{
			putchar(lowercase);
		}
	}
		putchar('\n');
		return (0);
}
