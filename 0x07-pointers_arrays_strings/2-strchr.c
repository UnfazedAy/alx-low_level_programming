#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * in the string 's'
 * @s: string
 * @c: Character
 * Return: Pointer to the first occurence of the character or
 * pointer to null value if not found
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}

return (s + 1);
}
