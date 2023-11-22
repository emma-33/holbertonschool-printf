#include "main.h"

/**
 * print_char - print character.
 * @ap: list.
 * Return: character counter
 */

int print_char(va_list ap, int char_num)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	char_num++;

	return (char_num);

}


/**
 * print_str - print string.
 * @ap: list.
 * Return: character counter
 */

int print_str(va_list ap, int char_num)
{
	char *str;
	int str_len = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
		exit(0);

	while (str[str_len] != '\0')
		str_len++;

	write(1, str, str_len);
	char_num += str_len;

	return (char_num);
}


/**
 * print_prct - print pourcentage.
 * @ap: list.
 * Return: character counter
 */

/*int print_prct(va_list ap)
{
	_putchar('%');
	_putchar(format[i]);
	*char_num += 2;

	return (char_num);

}*/

/**
 * print_int - print integer.
 * @ap: list.
 * Return: character counter
 */

/*int print_int(va_list ap)
{
	int i = 0;

	write(1, &i, );
	*char_num++;

	return (char_num);
}*/