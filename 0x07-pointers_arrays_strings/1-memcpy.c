#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int b = 0;
int i = n;

for (; b < i; b++)
{
dest[b] = src[b];
n--;
}
return (dest);
}
