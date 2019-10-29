#include "libmx.h"

void *mx_realloc(void *ptr, size_t size)
{
    void *buf = malloc(size);

    if(buf) 
        mx_memcpy(buf, ptr, size);
    
    free(ptr);

    return buf;

}

int main() 
{
    char *buffer = malloc(100);

    if(buffer) {

        printf("Memory allocated successfully.\n");

        buffer = mx_realloc(buffer, 1024);

        printf("memory copied successfully.\n");

        free(buffer);
    }
system("leaks a.out");
}
