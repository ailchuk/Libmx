#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle)
{
    if (!*needle)
        return (char *)haystack;

    while (*haystack) 
    {
        const char *start = haystack;
        const char *sub = needle;
    
        while (*haystack && *sub && *haystack == *sub)
        {
            haystack++;
            sub++;
        }
        if (!*sub)
            return (char *)start;
        haystack = start + 1;
    }
    return NULL;
}
