#include "main.h"

int print_octo(va_list o)
{
	int n = 0;

	octo(va_arg(o, unsigned int), &n);
	return (n);
}


int print_hex_up(va_list X)
{
	int n = 0;

	hex_up(va_arg(X, unsigned int), &n);
	return (n);
}


int print_hex_low(va_list x)
{
	int n = 0;

	hex_low(va_arg(x, unsigned int), &n);
	return (n);
}
