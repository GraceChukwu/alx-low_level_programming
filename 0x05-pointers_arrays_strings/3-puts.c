#include "main.h"
/**
*_puts - print a string followed by a new line, to stdout
*@str: string
*Return: 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
