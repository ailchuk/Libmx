#include "libmx.h"

int main () {
    char s1[] = "Trinity";
    char s2[] = "i";
    printf("%s\n", mx_memmem(s1, 7, s2, 1));
    return 0;
}

