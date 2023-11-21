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
	int (*p_p)(va_list, int) = &print_prct;
	int (*p_c)(va_list, int) = &print_char;
	int (*p_s)(va_list, int) = &print_str;

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
				(*p_p)(ap, char_num);

			else if (format[i] == 'c')
				(*p_c)(ap, char_num);

			else if (format[i] == 's')
				(*p_s)(ap, char_num);
		}
		format++;
	}
	va_end(ap);
	return (char_num);
}
