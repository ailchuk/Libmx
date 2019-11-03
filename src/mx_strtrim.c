#include "libmx.h"

char *mx_strtrim(const char *str)
{
    if (!str)
        return NULL;
    int left = 0;
    int right = 0;
    int i;
    int len = mx_strlen(str);
    char *result = NULL;

    for (i = 0; mx_isspace(str[i]); i++)
    {
        left++;
        if (left == mx_strlen(str))
            return "\0";
    }
    for (i = len - 1; mx_isspace(str[i]); i--)
        right++;
    result = mx_strnew(len - left - right);
    mx_strncpy(result, str + left, len - left - right);
    return result;
}
