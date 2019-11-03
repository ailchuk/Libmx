#include "libmx.h"

int main(void) {
    char *name = "\f My name... is Neo \t\n ";
    printf("%s\n", mx_strtrim(name)); //returns "My name... is Neo"
}

