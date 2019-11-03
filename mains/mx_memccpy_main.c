#include "libmx.h"

int main () {
    char d[] = "99999999999999";
    char s[] = "0123456789";
    printf("%s\n", mx_memccpy(d, s, 'a', 7));
    return 0;
}

