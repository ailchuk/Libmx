#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *dst1 = (char *)dst;
    char *src1 = (char *)src;
    unsigned int i = 0;

    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    return dst;
     
}
