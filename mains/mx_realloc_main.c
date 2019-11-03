#include "libmx.h"

int main () {
    //char s[] = "";
    char *a = "123456";
    a = (char *) mx_realloc(a, 20);
    mx_strncpy(&a[6], &a[0], 5);
    
    printf("%s\n", v);
    return 0;
}

