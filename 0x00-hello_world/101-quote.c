#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(void) {
    char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int fd = open("/dev/stderr", O_WRONLY);
    write(fd, msg, strlen(msg));
    close(fd);
    return 1;
}

