#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * return: a pointer or 0
 */
char *_strchr(char *s, char c)
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}