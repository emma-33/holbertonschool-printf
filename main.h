#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_prct(char prct);
int print_int(va_list ap);


#endif
