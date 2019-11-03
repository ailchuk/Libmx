#include "libmx.h"

int main() {
    char *s = "hello world";
    char *c = "w";
    printf("%s\n", mx_strstr(s, c));
}
