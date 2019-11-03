#include "libmx.h"

int main () {
    char s[] = "jjjjjooooodddddkkkkk";
    printf("%s\n", mx_memset(s, '5', 6));
    return 0;
}

