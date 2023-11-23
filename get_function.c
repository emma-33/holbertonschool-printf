#include "main.h"

/**
* get_function - choose the corresponding function
* @s: string to check
* Return: corresponding function or NULL
*/
int (*get_function(char s))(va_list)
{
	choice_c list[] = {
	{'c', print_char},
	{'s', print_str},
	{'d', print_int},
	{'i', print_int},
	{'%', print_prct},
	{'\0', NULL},
};

int i = 0;

while (list[i].f != NULL)
{
if (s == list[i].letter)
{
return (list[i].f);
}
i++;
}
return (NULL);
}
