#include "libmx.h"

int main() {
    int c = 9733;
    mx_print_unicode(c);
    printf("%c",'\n');
    //wprintf(L"\n%ls\n", c);
    return 0;
}
