#include "main.h"

/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
int i = 0, j = 0;

	/*make a conter for number of char printed*/
	/*char *sep = "";*/

va_list ap;

choice list[] = {
	{'c', print_char},
	{'s', print_str},
	{'\0', NULL}
};

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format, strlen(format));
			format++;
		}
		else
		{
			while (list[j].letter)
			{
				if (format[i] == list[j].letter)
				{
				list[j].print(ap);
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	_putchar('\n');
	va_end(ap);
	return (0);
	/*return the counter*/
}
