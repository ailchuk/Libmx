#include "libmx.h"

int main () {
    char s1[] = "01234567890123756789";
    char s2[] = "01234567890123456789";
    printf("%d\n", mx_memcmp(s1, s2, 20));
    return 0;
}

