#include "main.h"

void octo(unsigned int nb, int *size)
{
	if (nb / 8)
	{
		octo(nb / 8, size);
	}
	*size += 1;
	_putchar('0' + nb % 8);
}

void hex_up(unsigned int nb, int *size)
{

	if (nb / 16)
	{
		hex_up(nb / 16, size);
	}
	*size += 1;
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('A' + ((nb % 16) - 10));
}

void hex_low(unsigned int nb, int *size)
{
	if (nb / 16)
	{
		hex_low(nb / 16, size);
	}
	*size += 1;
	if (nb % 16 < 10)
		_putchar('0' + nb % 16);
	else
		_putchar('a' + ((nb % 16) - 10));
}