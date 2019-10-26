#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) 
{
    char *buf = (char *)b;
    size_t i = 0;

    while (i < len)
    {
        buf[i] = c;
        ++i;
    }
    return buf;
}
