#include <stdio.h>

#include <string.h>
/**
 * main - The main function
 *
 * str1 -str1 will be scanned for any matching
 * characters from str2.
 *
 * str2 - str2 contains the string whose matching
 * would be sought after in str1.
 *
 * Return: 0
 */

int main(void)

{
	char str1[] = "your name";
	char str2[] = "your";
	int len = strspn(str1, str2);

	printf("Length of the initial segment of the string matching is %d\n", len);
	return (0);
}


