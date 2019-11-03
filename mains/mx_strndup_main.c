#include "libmx.h"

int main() {
    char *s = "hello saldlsadlksg";
    char *d = mx_strndup(s, 10);
    printf("%s", d);
    return 0;
}
