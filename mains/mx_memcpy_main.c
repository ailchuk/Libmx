#include "libmx.h"


int main () {
    char one[] = "";
    char two[] = "123456";
    printf("%s\n", mx_memcpy(one, two, 6));
 printf("%s\n", memcpy(one, two, 6));
}

