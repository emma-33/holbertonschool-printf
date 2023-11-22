#include "main.h"

/**
 * print_number - print number.
 * @n: integer
 * @char_num: size for printf
 * Return: nothing
 */
void print_number(int n, int *char_num)
{
	unsigned int n_1;

	if (n < 0)
	{
		n *= -1;
		*char_num += 1;
		_putchar('-');
	}
	n_1 = n;
	if (n_1 / 10)
	{
		print_number(n_1 / 10, char_num);
	}
	*char_num += 1;
	_putchar((n_1 % 10) + '0');
}
