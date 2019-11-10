#include "libmx.h"

int mx_strcmp(const char *s1, const char *s2) {
	unsigned char *str1 = (unsigned char *)s1;
	unsigned char *str2 = (unsigned char *)s2;
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	return str1[i] - str2[i];
}
