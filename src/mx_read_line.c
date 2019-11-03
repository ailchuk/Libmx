#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, int delim, const int fd)
{
    if (fd < 0)
        return -1;
    if (buf_size == 0)
        return 0;
    *lineptr = mx_strnew(buf_size);
    char buf = '\0';
    int j = 0;
    int i = 0;
    int r = read(fd, &buf, sizeof(buf));
    
    while (r > 0)
    {
        char *line = mx_strnew(buf_size);
        for (i = 0; i < buf_size && r > 0; i++)
        {
            if (buf == delim)
            {
                line[i] = '\0';
                *lineptr = mx_strjoin(*lineptr, line);
                free(line);
                return j;
            }
            line[i] = buf;
            j++;
            r = read(fd, &buf, sizeof(buf));
        }
        *lineptr = mx_strjoin(*lineptr, line);
        free(line);
    }
    return j;
}

int main() {
    int fd = open("1.txt", O_RDONLY);
    char *line;
    int buf_size = 4;
    int delim = '.';
    int k = mx_read_line(&line, buf_size, delim, fd);
    printf("%d\n", k);
    printf("%s", line);
    close(fd);
    return 0;
}

