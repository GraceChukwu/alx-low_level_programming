#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * Return: 0
 */
char *string_toupper(char *)
{
int a;

a = 0;
while (a != '\0')
{
if (a >= 97 && a <= 122)
a = a - 32;
a++;
}
return (0);
}
