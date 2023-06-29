#include "main.h"
/**
 * _strcmp - A function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: s1[1] and s2[2]
 */
int _strcmp(char *s1, char *s2)
{
int b;

b = 0;
while (s1[b] != '\0' && s2[b] != '\0')
{
if (s1[b] != s2[b])

{
return (s1[b] - s2[b]);
}
b++;
return (0);
}
