#include "main.h"
#include <stdio.h>

/**
 * print_array - print element of array integers and new line
 * @n: number of element of array
 * @a: array of integer
 * return: 0
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
