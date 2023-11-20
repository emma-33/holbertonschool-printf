#include "main.h"

/**
 *
 * print_char - print character.
 * @ap: list.
 *
 */

int print_char(va_list ap)
{
	char c = va arg(ap, int);

	_putchar(c);

	return(1);
}


/**
 *
 * print_str - print string.
 * @ap: list.
 *
 */

int print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
		return(NULL);

	_putchar(str);

	return(1);
}
