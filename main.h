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
void print_char(va_list ap, int *char_num);
void print_str(va_list ap, int *char_num);
void print_prct(int *char_num);
void print_int(va_list ap, int *char_num);


#endif
