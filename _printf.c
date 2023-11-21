#include "main.h"

/**
* _printf - prints all
* @format: list of type of arguments
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int char_num = 0;

	/*char *sep = "";*/
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format, 1);
			char_num++;
		}
		else
		{
			format++;
			if (format[i] == '\0')
				break;

			if (format[i] == '%')
				print_prct(ap, &char_num);

			else if (format[i] == 'c')
				print_char(ap, &char_num);

			else if (format[i] == 's')
				print_str(ap, &char_num);
		}
		format++;
	}
	va_end(ap);
	return (char_num);
}
