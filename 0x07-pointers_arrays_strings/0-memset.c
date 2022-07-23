#include <stdio.h>

#include <string.h>

/**
 * main - main function
 *
 * memset - fills a memory with a number
 * of bytes
 *
 * @15 - The character filling starts from the
 * fifteeenth character
 *
 * @'.' - filled with dots
 * Return: 0
 */

int main(void)

{
	char arr[] = "This is my first program demonstrating the memset function";

	memset(arr + 15, '.', 10 * sizeof(char));

	printf("%s\n", arr);
}

