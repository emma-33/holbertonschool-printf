#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>


typedef struct choice
{
	char letter;
	int (*check_function)(va_list ap);
} choice_c;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_str(va_list ap);
int print_prct(va_list ap);
int print_int(va_list ap);
void print_number(int n, int *char_num);

#endif
