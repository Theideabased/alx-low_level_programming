#include <stdio.h>
#include "main.h"

/**
 * puts2 : print other character in the line
 * @str - the string to print from
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 != 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
