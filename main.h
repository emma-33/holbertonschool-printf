#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 * struct choice - param to check
 * @letter: type
 * @check: fonction to send to
*/
typedef struct choice
{
char letter;
int (*check)(va_list ap, int char_num);
} choice;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap, int char_num);
int print_str(va_list ap, int char_num);
int print_int(va_list ap, int char_num);


#endif
