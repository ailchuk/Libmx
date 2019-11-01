#include "libmx.h"

char *mx_del_extra_spaces(const char *str)
{
    char *target;
	int i = 0;
	int j = 0;
	int k = 0;
	int length = 0;

	if (str == NULL) {
		return NULL;
	}
	while (str[k++]) {
		if (!mx_isspace(str[k])) {
			length++;
		}
	}
	str = mx_strtrim(str);
	target = mx_strnew(length - 1);
	// free(target);
	while (str[i]) {
		target[j] = str[i];
		if (mx_isspace(str[i])) {
			while (mx_isspace(str[i + 1])) {
				i++;
			}
		}
		i++;
		j++;
	}
	target[i] = '\0';
	if (target == NULL)
		return NULL;
	return target;
}

int main()
{
    char *name = "\f My name... is \r Neo \t\n ";
    printf("%s", mx_del_extra_spaces(name)); //returns "My name... is Neo" 
    //char *arr = mx_del_extra_spaces(name);
    //printf("%s", arr);
    
}
