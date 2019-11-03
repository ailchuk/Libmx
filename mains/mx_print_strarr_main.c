#include "libmx.h"

int main() {
    char *s[] = {"mama", "myla", "ramu", "ramu", "myla", "ramu", "ramu", NULL};
    char delim = '*';
    mx_print_strarr(s, &delim);
    return 0;
}

