#include "libmx.h"

int main () {
    char s[] = "";
    char v[] = "123456";
    printf("%s\n", mx_memcpy(s, v, 6));
    return 0;
}

