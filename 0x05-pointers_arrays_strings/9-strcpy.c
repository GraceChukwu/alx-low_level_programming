#include "main.h"
/**
 * _strcpy - copy pointed string
 * @src: source
 * @dest: destination
 * return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j++] = '\0';
	return (dest);
}
