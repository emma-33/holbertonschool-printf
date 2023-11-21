#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>


/**
 *
 * struct choice - parameter to check and print.
 * @letter: type.
 * @print: fonction to send to.
 *
 */

typedef struct choice
{
	char letter;
	int (*print)(va_list ap);
} choice;



int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);

#endif
