#include "libmx.h"

int main(void) {
    char *name = "\f My name... is Neo \t\n ";
    printf("%s\n", mx_strtrim(name)); //returns "Free your mind."
    //printf("%s\n", mx_concat_words(NULL)); //returns NULL
    return 0;
}

