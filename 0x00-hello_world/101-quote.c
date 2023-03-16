#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints an error message to stderr
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int fd = open("/dev/stderr", O_WRONLY);
	write(fd, msg, strlen(msg));
	close(fd);
	return (1);
}

