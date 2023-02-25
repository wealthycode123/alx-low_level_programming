#include <stdio.h>

/**
 *main - prints alphabets in lower and upper case using putchar only
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	j = 65;

	while (j <= 90)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
