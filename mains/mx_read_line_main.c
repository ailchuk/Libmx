#include "libmx.h"

int main() {
    int fd = open("t.txt", O_RDONLY);
    char *line;
    int buf_size = 5;
    int delim = 'g';
    int k = mx_read_line(&line, buf_size, delim, fd);
    printf("%d\n", k);
    printf("%s", line);
    close(fd);
    return 0;
}
