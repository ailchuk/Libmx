#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) 
{
    char *buf = (char *)b;

    for (size_t i = 0; i < len; i++)
        buf[i] = c;

    return buf;
}
