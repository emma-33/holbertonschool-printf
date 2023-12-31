#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
int len3;
int len4;

len = _printf("123456 Let's try to printf a simple sentence.\n");
len2 = printf("123456 Let's try to printf a simple sentence.\n");
len3 = _printf("258475\n");
len4 = printf("258475\n");

_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

_printf("Length:[%d, %i]\n", len3, len3);
printf("Length:[%d, %i]\n", len4, len4);

_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);

_printf("Positive:[%d]\n", 762534);
printf("Positive:[%d]\n", 762534);

_printf("zéro:[%d]\n", 0);
printf("zéro:[%d]\n", 0);

_printf("Character:[%c]\n", 'S');
printf("Character:[%c]\n", 'S');

_printf("Character:[%c]\n", 'h');
printf("Character:[%c]\n", 'h');

_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");

len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");

_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");

return (0);

}
