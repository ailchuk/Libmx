#include "libmx.h"

int main () {
    char s1[] = "Trinity";
    printf("%s\n", mx_memchr(s1, 'i', 7));
    return 0;
}

