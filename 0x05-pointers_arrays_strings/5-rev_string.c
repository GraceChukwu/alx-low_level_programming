#include "main.h"
/**
 * rev_string - reverses a sring
 * @s: string
 * Return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int l;

while (s[counter] != '\0')

for (l = 0; l < counter; l++)
	{
		rev = s[l];
		s[l] = s[counter];
		s[counter] = rev;
	}
}
