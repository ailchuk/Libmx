#include "libmx.h"

int main () {
    char s1[] = "01234567890123456789";
    printf("%s\n", mx_memchr(s1, 53, 90));
    return 0;
}

