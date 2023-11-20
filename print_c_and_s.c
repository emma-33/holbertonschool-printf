#include "main.h"

/**
 *
 * print_char - print character.
 * @ap: list.
 *
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);

	return (1);
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
	int lenght = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
		return (0);

	while (str[lenght] != '\0')
	{
		_putchar(str[lenght]);
		lenght++;
	}

	return (1);
}
