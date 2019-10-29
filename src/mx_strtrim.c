#include "libmx.h"

char *mx_strtrim(const char *str)
{
    int len = mx_strlen(str);
    int i = -1;
    int start = 0;
    int end = 0;
    int size;
    char *target = NULL;

    if (!str)   return NULL;
    while (mx_isspace(str[++i]))
        start++;
    i = len;
    while (mx_isspace(str[--i]))
        end++;
    size = len - (end + start);
    str += start;
    target = mx_strnew(size);
    target = mx_strncpy(target, str, size);
    if (target == NULL)
        return NULL;
    return target;
    
}

// int main()
// {
//     char *name = "\f My name... is Neo \t\n ";
//     printf("%s\n", mx_strtrim(name)); //returns "My name... is Neo"
// system("leaks a.out");
// }
