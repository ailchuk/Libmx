#include "libmx.h"

char *mx_strtrim(const char *str)
{

    if (!str)
        return NULL;
    int left = 0;
    int right = 0;
    int i;
    int length = mx_strlen(str);
    char *result;

    for (i = 0; mx_isspace(str[i]); i++)
    {
        left++;
        if (left == mx_strlen(str))
            return "\0";
    }
    for (i = length - 1; mx_isspace(str[i]); i--)
        right++;
    result = mx_strnew(length - left - right);
    mx_strncpy(result, str + left, length - left - right);
    return result;
}

int main()
{
    //char *name = "\f My name... is Neo \t\n ";
    char *name = "     ";
    printf("%s", mx_del_extra_spaces(name)); //returns "My name... is Neo" 
    //char *arr = mx_del_extra_spaces(name);
    //printf("%s", arr);
    system("leaks a.out");
}
