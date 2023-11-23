#include "main.h"

/**
* print_char - print character.
* @ap: va_list.
* Return: 1.
*/

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);

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
		str = "(null)";

	else
	{
		while (str[str_len] != '\0')
		{
			_putchar(str[str_len]);
			str_len++;
		}
	}
	return (str_len);
}


/**
* print_prct - print pourcentage.
* @ap: va_list.
* Return: 1.
*/

int print_prct(va_list ap)
{
	(void)ap;

	_putchar('%');

	return (1);
}


/**
 * print_int - print an integer.
 * @ap: va_list.
 * Return: n.
 */


int print_int(va_list ap)
{
	int n = 0;
	int num;

	num = va_arg(ap, int);
	print_number(num, &n);
	return (n);
}
