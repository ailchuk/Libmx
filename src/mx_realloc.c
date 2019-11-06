#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *res;
    if (size == 0 && ptr) {
        free(ptr);
        return NULL;
    }
    if (size && !ptr)
        return malloc(size);
    size_t len = mx_strlen(ptr);

    if (len > size) {
        res = malloc(len);
        if (!res)
            return NULL;
        res = mx_memmove(res, ptr, len);
    }
    else {
        res = malloc(size);
        if (!res)
            return NULL;
        res = mx_memmove(res, ptr, size);
    }
    return res;
}

int main () {
    //char s[] = "";
    char *a = "123456";
    a = (char *) mx_realloc(a, 20);
    mx_strncpy(&a[6], &a[0], 5);
    
    printf("%s\n", v);
    return 0;
}
