#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (!str)
	    return NULL;
    char *s1 = mx_strtrim(str);
    char *s2 = mx_strtrim(str);
    char *result = NULL;
    int i = 0; 
    int j = 0;            

    while (s1[i]) {
        if (!mx_isspace(s1[i])) {
            s2[j] = s1[i];
	    j++;
        } 
	else if (mx_isspace(s1[i]) && !mx_isspace(s1[i + 1])) {
  	    s2[j] = s1[i];
            j++;
        }
        i++;
    }
    s2[j] = '\0';
    result = mx_strnew(mx_strlen(s2));
    mx_strncpy(result, s2, mx_strlen(s2));
    mx_strdel(&s1);
    mx_strdel(&s2);
    return result;
}
