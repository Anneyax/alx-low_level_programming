#include <stdio.h>
/**
 * main - Prints size of characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("size of char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu bytes(s)\n", sizeof(int));
printf("size of a long  int: %zu bytes(s)\n", sizeof(long int));
printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("size of a float: %zu bytes(s)\n",sizeof(float));
return (0);
}
