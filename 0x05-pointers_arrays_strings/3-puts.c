#include <stdio.h>
#include "main.h"

/**
 *_puts - function that prints a string,
 *@str: the string to be inputed. 
 *Description : print a string
 *on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
