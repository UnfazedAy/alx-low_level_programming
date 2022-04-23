#include "main.h"

/**
 * _strncat - Concatenates two stings
 * @dest: Destination string
 * @src: the source of the string
 * @n: number of bytes to look
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
