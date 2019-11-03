#include "libmx.h"

int main(void) {
    char str[] = "**Good bye,**Mr.*Anderson.****";
    char **p = mx_strsplit(str, '*');
    for (int i = 0; p[i]; i++) {
        printf("%s ", p[i]);
    }
}
