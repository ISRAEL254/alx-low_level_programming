#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 */

int main(int argc, char **argv)
{
	int z, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	z = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", z * y);

	return (0);
}
