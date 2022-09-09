#include<stdio.h>

/**
 * this script will print the size of various
 * type on the computer and run it with compiler
 */
int main(void)
{
/** Declaration of variable **/
int a;
long int b;
long long int c;
char d;
float f;
/** Print all variables **/
printf("Size of char: %lu byte(s)\n", sizeof(d));
printf("Size of an int: %lu byte(s)\n", sizeof(a));
printf("Size of a long int: %lu byte(s)\n", sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return(0);
}

