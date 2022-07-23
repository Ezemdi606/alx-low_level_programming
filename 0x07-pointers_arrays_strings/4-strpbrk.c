#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - This program shall use the strpbrk function
 * to make a mini game.
 *
 * @*i - is the pointer variable
 *
 * @s1 - is the string having the characters
 * which is to be matched with the s2
 *
 * @s2 - is the array whose content will be
 * taken in from the user. Note that I set
 * the array size to 1000 because I want to
 * prevent buffer overflow by all means.
 *
 * Return: 0
 */

int main(void)

{
	char *i;
	char s1[] = "xyoz";
	char s2[1000];

	printf("Enter your characters: ");
	/**
	 * notice that I didn't use the ampersand sign before s2
	 * it'll cause errors to your work, and I advice that only
	 * in a case where you have to use [^\n] should you remove
	 * the ampersand sign. That's what I know for now.
	 */
	scanf("%[^\n]*s", s2);
	i = strpbrk(s1, s2);
	if (i != 0)
	{
		printf("Congrats! The matching character is: %c\n", *i);
	}
	else
	{
		printf("Sorry, you didn't find the matching character :(");
	}

	return (0);
}
