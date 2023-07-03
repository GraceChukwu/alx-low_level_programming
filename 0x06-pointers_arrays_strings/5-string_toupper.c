#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @b: pointer
 * Return: 0
 */
char *string_toupper(char *b)
{
int a;

a = 0;
while (b[a] != '\0')
{
if (b[a] >= 97 && b[a] <= 122)
b[a] = a - 32;
a++;
}
return (0);
}
