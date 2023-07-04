#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of byte
 * return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
return (s);
}
