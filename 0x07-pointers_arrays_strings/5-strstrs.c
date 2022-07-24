#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * I want to demonstrate another way the strstr function
 * can be used
 *
 * @*i - this is the pointer variable
 *
 * @arr - The array containg the string
 *
 * Return: 0
 */
int main(void)
{
	char *i;
	char arr[] = "This is test";

	i = strstr(arr, "s");

	printf("New string: %s", i);
	return (0);
}
