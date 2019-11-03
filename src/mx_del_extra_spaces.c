#include "libmx.h"

static bool is_extra_space(int c)
{
	return (c > 8 && c < 14);
}
char *mx_del_extra_spaces(const char *str)
{
	char *tmp_str = mx_strnew(mx_strlen(str));
    char *res = NULL;

    for (int i = 0, j = 0; str[i] != '\0'; tmp_str[j] = str[i], ++i, ++j)
        if (is_extra_space(str[i]) || mx_isspace(str[i]))
            for (tmp_str[j] = ' '; mx_isspace(str[i + 1]); ++i);
    res = mx_strtrim(tmp_str);
    free(tmp_str); 
    return res;
}

int main()
{
    // char *name = "                  \f \n \f \r     ";
	 char *name = "\f\n    s    \f          s S\f";
    printf("%s", mx_del_extra_spaces(name)); //returns "My name... is Neo" 
    //char *arr = mx_del_extra_spaces(name);
    //printf("%s", arr);
	// system("leaks a.out");
}
