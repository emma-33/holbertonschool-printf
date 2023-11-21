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

	write(1, &c, 1);
	char_num++;

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
	int str_len = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
		return(0);

	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
	char_num += str_len;

	return(1);
}


/**
 *
 * print_prct - print pourcentage.
 * @ap: list.
 *
 */

int print_prct(va_list ap)
{
	write(1, format, 1);
	char_num++;

	return(1);
}
