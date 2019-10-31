#include "libmx.h"

char *mx_strtrim(const char *str) 
{

    if (!str)
     return NULL;
    int leading = 0;
    int trailing = 0;
    int i;
    int length = mx_strlen(str);
    char *result;
    
    for (i = 0; mx_isspace(str[i]); i++)
    {
        leading++;
        if (leading == mx_strlen(str))
            return "\0";
    }
    for (i = length - 1; mx_isspace(str[i]); i--)
        trailing++;
    result = mx_strnew(length - leading - trailing);
    mx_strncpy(result, str + leading, length - leading - trailing);
    free(result);
    return result;
}
