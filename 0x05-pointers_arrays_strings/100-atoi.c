#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s:string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int b = 0;
	unsigned int ni = 0;
int min = 1;
int isi = 0;

while (s[b])
{
	if (s[b] == 45)
	{
		min *= -1;
	}
	while (s[b] >= 48 && s[b] <= 57)
	{
		isi = 1;
		ni = (ni * 10) + (s[b] - '0');
		b++;
	}
	if (isi == 1)
	{
	break;
	}
b++;
}
ni *= min;
return (ni);
}
