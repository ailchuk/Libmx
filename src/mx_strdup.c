#include "libmx.h"

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str)
{
    char *new = mx_strnew(mx_strlen(str));
    return mx_strcpy(new, str);
}
