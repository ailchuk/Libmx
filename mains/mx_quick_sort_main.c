#include "libmx.h"
#include <stdio.h>

int main() {
    char *s[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    printf("%d\t", mx_quick_sort(s, 0, 3));
    for (int i = 0; i <= 3; i++) {
        printf("%s ", s[i]);
    }
    return 0;
}
