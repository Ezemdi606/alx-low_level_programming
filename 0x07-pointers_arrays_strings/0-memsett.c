#include <stdio.h>

#include <string.h>
/**
 * main - The main function
 *
 * str1 - The destination array
 *
 * str12 - The source array
 *
 * Return: 0
 */
int main(void)

{
	char str1[] = "My first program demonstrating memcpy";
	char str2[] = "Copying to the first array";
	/**
	 * seven characters will be copied from
	 * str2 to str1.
	 * to copy the whole string not just seven
	 * use "strlen(str2)"
	 */
	memcpy(str1, str2, 7);
	printf("%s\n", str1);
	return (0);
}


