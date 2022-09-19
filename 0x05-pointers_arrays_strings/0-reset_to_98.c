#include "main.h"
#include <stdio.h>

/**
 * main -check the code
 * Description: change value of code through pointer
 * Return: Always 0.
 */
int main(void)
{
	int n;
	n = 402;
	printf("n%d\n", n);
	int *ip;
	ip = &var;
	*ip = 98;
	n = *ip;
	printf("n%d\n", n);

	return (0);
}
