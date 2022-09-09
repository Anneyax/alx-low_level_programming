#include <stdio.h>
/**
 * main - Prints size of various types
 * Return: 0 if exited properly,non-zero otherwise
 */
int main(void)
{
printf("size of char: %d byte(s)\n", sizeof(char));
printf("size of an int: %d bytes(s)\n", sizeof(int));
printf("size of a long  int: %d bytes(s)\n", sizeof(long int));
printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
printf("size of a float: %d bytes(s)\n",sizeof(float));
return (0);
}
