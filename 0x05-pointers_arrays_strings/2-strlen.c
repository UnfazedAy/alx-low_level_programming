#include<stdio.h>
#include "main.h"

/**
*_strlen - length of a string
*@s: A pointer to an int that will be changed/updated
*
*Return: void that means our answer is correct
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
