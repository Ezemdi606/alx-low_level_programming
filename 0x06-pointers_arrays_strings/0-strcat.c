#include "main.h"

#include <string.h>

/**
 * _strcat - This function concatenates two strings.
 *
 * @dest: input parameter
 *
 * @src: input parameter
 *
 * Return: pointer to string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}


