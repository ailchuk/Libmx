#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim)
{
    if (*arr != NULL && *delim)
    {
        int i = 0;
        while (arr[i] != NULL)
        {
            if (arr[i + 1])
            {
                mx_printstr(arr[i]);
                mx_printchar(*delim);
            }
            i++;
        }
        mx_printstr(arr[i - 1]);
        mx_printchar('\n');
    }
}
