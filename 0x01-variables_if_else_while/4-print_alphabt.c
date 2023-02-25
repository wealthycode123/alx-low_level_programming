#include <stdio.h>

/**
 *main - prints alphabets in lowercase with only putchar() & excludin e and q
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}

		i++;
	}
	putchar(10);

	return (0);
}
