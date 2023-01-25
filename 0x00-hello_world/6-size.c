#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
       	printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n",sizeof(long integerType));
       	printf("Size of a long long int: %ld byte(s)\n",sizeof(long long integerType));
	printf("Size of a float: %ld bytes(s)\n", sizeof(floatType));
	return (0);
}
