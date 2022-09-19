#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 * Description: this code will change the number of a variable from the pointer
 * Return: Always 0.
 */

int main(void)
{
	printf("_______________QUESTION 1________________\n");
	
	int n;

	n = 402;
	printf("n=%d\n", n);
	int *ip;
	ip = &n;
	*ip = 98;
	n = *ip;
	printf("n=%d\n", n);
	return (0);
}


