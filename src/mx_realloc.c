#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    char *buf = NULL;

    if (!size && ptr) {
        free(ptr);
        buf = malloc(malloc_size(NULL));
        mx_memcpy(buf, "", 16);
        return buf;
    }
    if (size && !ptr) {
        buf = malloc(size * sizeof(char));
        return buf;
    }
    buf = malloc(size * sizeof(char));
    mx_memcpy(buf, ptr, malloc_size(ptr));
    free(ptr);
    return buf;
}

int main () {
    //char s[] = "";
    char *a = "123456";
    a = (char *) mx_realloc(a, 20);
    mx_strncpy(&a[6], &a[0], 5);
    
    printf("%s\n", v);
    return 0;
}
