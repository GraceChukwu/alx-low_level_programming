#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 * @k - input number as an integer
 * return: absolute value
 */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
	{
		return (k * -1);
	}
}
