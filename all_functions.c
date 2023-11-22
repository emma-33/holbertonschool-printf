#include "main.h"

/**
 * print_char - print character.
 * @ap: va_list.
 * Return: 1.
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int)
		_puthar(c);

	return (1);
}


/**
 * print_str - print string.
 * @ap: va_list.
 * Return: str_len - 1('\0').
 */

int print_str(va_list ap)
{
	char *str;
	int str_len = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
		exit(2);

	while (str[str_len] != '\0')
		str_len++;
	write(1, str[str_len], str_len);

	return (str_len);

}


/**
 * print_prct - print pourcentage.
 * @prct: charactere %.
 * Return: lenght.
 */

int print_prct(char prct)
{
	if (prct == %)
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
