#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string to be located
 * @c: the character to be located.
 *
 * Return: if c is founf - a pointer to the first occurence
 * if c is not found - null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
