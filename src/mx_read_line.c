#include "libmx.h"

int mx_read_line(char **lineptr, int buf_size, int delim, const int fd)
{
    if (fd < 0 || buf_size <= 0 || read(fd, 0, 0) < 0)
        return -1;
    *lineptr = mx_strnew(buf_size);
    char buf = '\0';
    int j = 0, i = 0;
    int r = read(fd, &buf, sizeof(buf));
    
    while (r > 0) {
        char *line = mx_strnew(buf_size);
        for (i = 0; i < buf_size && r > 0; i++, j++) {
            if (buf == delim) {
                line[i] = '\0';
                *lineptr = mx_strjoin(*lineptr, line);
                mx_strdel(&line);
                return j;
            }
            line[i] = buf;
            r = read(fd, &buf, sizeof(buf));
        }
        *lineptr = mx_strjoin(*lineptr, line);
        mx_strdel(&line);
        mx_strdel(lineptr);    
    }
    return j;
}
