#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse using putchar only
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
