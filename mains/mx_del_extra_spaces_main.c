#include "libmx.h"

int main(void) {
    char *name = "\f  My name...     is  \r Neo  \t\n ";
    char *s = mx_del_extra_spaces(name);
    printf("\"%s\"\n", s);
    //printf("%c", s[26]);
    //printf("%s\n", mx_concat_words(NULL)); //returns NULL
    return 0;
}

