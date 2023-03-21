#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, d;

	for (a = 0; a <= 8; a++)
	{
		for (d = a + 1; d <= 9; d++)
		{
			putchar(a + '0');
			putchar(d + '0');
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
