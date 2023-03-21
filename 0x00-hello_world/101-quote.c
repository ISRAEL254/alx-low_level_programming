#include <unistd.h>
#define ERROR_MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	const char *msg = ERROR_MESSAGE;
	int len = 0;

	while (msg[len])
	len++;

	write(2, msg, len);

	return (1);
}

