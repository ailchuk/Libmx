#include "libmx.h"

int main () {
    char *s = "123456";
    printf("%d\n", mx_get_char_index(s, '5'));
}
