#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    if (!ptr)
        return malloc(size);
    if (size < 0)
        return NULL;
    char *buf = malloc(size);

    if(buf) 
        mx_memcpy(buf, (char *)ptr, malloc_size(ptr));
    free(ptr);
    return buf;

}
