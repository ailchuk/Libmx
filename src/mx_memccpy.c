#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    char *dst1 = (char *)dst;
    char *src1 = (char *)src;

    for (size_t i = 0; i < n; dst1++, src1++, i++)
    {
        *dst1 = *src1;
        if (*src1 == (char)c)
            return (dst1 + 1);       
    }
    return 0;
}

int main () {
     // Массив источник данных
   char src[15] = "1234567890";

   // Массив приемник данных
   char dst[15] = "";

    printf("%s\n", mx_memccpy(dst, src, '5', 10));
}
