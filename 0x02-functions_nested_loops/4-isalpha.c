#include <main.h>
/**
 * isalpha - print letter in lowercase or uppercase. 
 * @c: the charater in ASCII code
 * Return: 1 for uc lc letter. 0 for others
 */
int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	return (1);

else

	return (0);

_putchar("\n");
}
