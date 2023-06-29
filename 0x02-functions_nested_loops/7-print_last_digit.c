#include "main.h"
/**
 * print the last digit of number
 * @j: imput number as an integer
 * Return: the last value of the digit
 */
int print_last_digit(int)
{
	int j;
	int i;

	i= j % 10;
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

