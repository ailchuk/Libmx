#include "libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    int count = mx_count_substr(str, sub);
    int len = mx_strlen(str) - (mx_strlen(sub) * count) + (mx_strlen(replace) * count);
    char *tmp_str = mx_strnew(len);
    char *p_tmp = tmp_str;

    while (*str != '\0')
    {
        if (str != mx_strstr(str, sub))
        {
            *tmp_str = *str;
            str++;
            tmp_str++;
        }
        if (str == mx_strstr(str, sub))
        {
            mx_strncpy(tmp_str, replace, mx_strlen(replace));
            tmp_str += mx_strlen(replace);
            str += mx_strlen(sub);
        }
    }
    return p_tmp;
}

int main()
{
    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts")); //returns "McDonuts"
    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta")); //returns "Utata tuta"
system("leaks a.out");
}
