#include "libmx.h"

int main () {
    char s1[] = "Trinity";
    printf("%s\n", mx_memmove(s1, &s1[2], 5));
    return 0;
}

