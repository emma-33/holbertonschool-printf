#include "main.h"

/**
 * print_char - print character.
 * @ap: list.
 * @char_num: counter for character.
 */

void print_char(va_list ap, int *char_num)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	*char_num++;
}


/**
 * print_str - print string.
 * @ap: list.
 * @char_num: counter for character.
 */

void print_str(va_list ap, int *char_num)
{
	char *str;
	int str_len = 0;

	str = va_arg(ap, char *);

	if (str == NULL)
		exit(0);

	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
	*char_num += str_len;

}


/**
 * print_prct - print pourcentage.
 * @ap: list.
 * @char_num: counter for characters.
 */

/*void print_prct(int *char_num)
{
	char prct = va_arg(ap, int);

	write(1, &prct, 1);
	*char_num++;

}*/

/**
 * print_int - print integer.
 * @ap: list.
 * @char_num: counter for characters.
 */

void print_int(va_list ap, int *char_num)
{
	int i = 0;

	write(1, &i, );
	*char_num++;
}