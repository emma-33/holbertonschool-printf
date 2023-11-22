#include "main.h"

/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, j;
	int char_num = 0;
	va_list ap;

	choice list[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(ap, format);

	for (i = 0 ; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
			char_num++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break;
			else if (format[i] == '%')
			{
				_putchar('%');
				char_num++;
			}
			for (j = 0; list[j].letter; j++)
			{
				if (format[i] == list[j].letter)
				{
					list[j].check(ap, char_num);
				}
			}
		j = 0;
		}
	}
	va_end(ap);
	return (char_num);
}

