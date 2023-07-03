#include "main.h"
/**
 * print_last_digit
 * @j: imput number as an integer
 * Return: the last value of the digit
 */
int print_last_digit(int j)
{
	int i;

	j = 0;
	i = j % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}

