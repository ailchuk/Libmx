#include "libmx.h"
#include <unistd.h>

int main() {
    //char *s = "  follow  *   the  white rabbit ";
    char *s = NULL;
    printf("%d\n", mx_count_words(s, ' '));
}
