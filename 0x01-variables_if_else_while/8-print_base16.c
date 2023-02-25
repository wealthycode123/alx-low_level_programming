#include <stdio.h>

/**
 *main - prints in base 16 in lowercase using only putchar()
 *Return: Always 0 (Success)
 */

int main(void)
{
	int hex_1 = 0x30;
	int hex_2;

	while (hex_1 <= 0x39)
	{
		putchar(hex_1);
		hex_1++;
	}

	hex_2 = 0x61;

	while (hex_2 <= 0x66)
	{
		putchar(hex_2);
		hex_2++;
	}

	putchar('\n');

	return (0);
}
