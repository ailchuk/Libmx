#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len)
{
    char *dest = dst;
    const char *source = src;
    size_t i;

    if (dest <= source)
    {
        for (i = 0; i < len; i++)
            dest[i] = source[i];
    }
    else
    {
        for (i = len; i > 0; i--)
            dest[i - 1] = source[i - 1];
    }
    return dest;
}

int main()
{
    char string [] = "stackoverflow";
    char *third, *fourth;
    third = string;
    fourth = string;

    puts(string);
    memcpy(third+5, third, 7);
    puts(third);
    memmove(fourth+5, fourth, 7);
    puts(fourth);

    puts("\n\n\n");
    puts(string);
    mx_memcpy(third+5, third, 7);
    puts(third);
    mx_memmove(fourth+5, fourth, 7);
    puts(fourth);
    return 0;
}
