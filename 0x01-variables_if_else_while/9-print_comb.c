#include <stdio.h>

/**
 *main - Prints 0 to 9 using putchar fucntion
 *Return: Always 0 (Success)
 */

int main(void)
{
	int values = 0x30;

	while (values <= 0x39)
	{
		putchar(values);
		if (values != 0x39)
		{
			putchar(',');
			putchar(' ');
		}
		values++;
	}

	putchar('\n');

	return (0);
}
