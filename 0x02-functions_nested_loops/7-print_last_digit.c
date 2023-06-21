#include <main.h>
/**
 * print the last digit of number
 * j: imput number as an integer
 * Return: the last value of the digit
 */
int print_last_digit(int);
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

