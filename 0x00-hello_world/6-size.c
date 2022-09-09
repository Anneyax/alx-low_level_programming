#include <stdio.h>

/**
 * main - prints size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
printf("size of a char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d bytes(s)\n", sizeof(int));
printf("size of long int: %d byte(s)\n", sizeof(long));
printf("size of long long int: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return (0);
}
