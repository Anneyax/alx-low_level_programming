#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
long longType;
/* sizeof evaluates the size of a avariable*/
printf("size of a char: %zu byte(s)\n", sizeof(charType));
printf("size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a long int: %zu byte(s)\n", sizeof(longType));
printf("size of a long long int: %zu byte(s)\n", sizeof(doubleType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}

