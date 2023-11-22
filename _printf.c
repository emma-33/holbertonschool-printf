#include "main.h"
/*
* check_function - check for the right function
* @ap: list
* @format: format
* Return: count of characters
*/
int check_function(char *format, va_list ap, choice_c *list)
{
	int i = 0, j = 0;
	int char_num = 0;

	while (format[i])
	{
		while (format[i] != '\0' && format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			char_num++;
		}
		if (format[i] == '%')
		{
			i++;
			while (list[j].letter != '\0')
			{
				if (list[j].letter == format[i])
				{
					char_num += list[j].check_function(ap);
					/*break;*/
				}
				j++;
			}
		}
	}
	return (char_num);
}
/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list ap;
choice_c list[] = {
	{'c', print_char},
	{'s', print_str},
	{'d', print_int},
	{'%', print_prct},
	{'\0', NULL},
};

	va_start(ap, format);

	char_count = check_function((char *)format, ap, list);
	va_end(ap);

	return (char_count);
}
