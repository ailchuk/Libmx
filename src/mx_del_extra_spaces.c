#include "libmx.h"

char *mx_del_extra_spaces(const char *str)
{
    char *target;
	char *n_str;
	int i = 0;
	int j = 0;
	int k = 0;
	int length = 0;

	if (str == NULL) return NULL;
	while (str[k++]) 
	{
		if (!mx_isspace(str[k]))
			length++;
	}
	n_str = mx_strtrim(str);
	target = mx_strnew(length - 1);
	while (n_str[i]) {
		target[j] = n_str[i];
		if (mx_isspace(n_str[i])) {
			while (mx_isspace(n_str[i + 1])) {
				i++;
			}
		}
		i++;
		j++;
	}
	free(n_str);
	return target;
}

// int main()
// {
//     char *name = "\f My name... is \r Neo \t\n ";
//     printf("%s", mx_del_extra_spaces(name)); //returns "My name... is Neo" 
//     //char *arr = mx_del_extra_spaces(name);
//     //printf("%s", arr);
// 	system("leaks a.out");
// }
