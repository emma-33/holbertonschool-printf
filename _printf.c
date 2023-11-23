#include "main.h"

/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int char_count = 0;
	va_list ap;
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ap, format);

	if (*format != '\0')
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%' && (!format[i + 1] || format[i + 1] == '\0'))
			{
				return (-1);
			}
			if (format[i] == '%')
			{
				f = get_function(format[i + 1]);

				if (f != NULL)
				{
					char_count += f(ap);
					i += 2;
				}
				else
				{
					return (-1);
				}
			}
			_putchar(format[i]);
			i++;
			char_count++;
		}
	}
	va_end(ap);
	return (char_count);
}
