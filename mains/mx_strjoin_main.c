#include "libmx.h"

int main () {
	char a[] = "true_";
	char b[] = "false";
	char *p = mx_strjoin(a, b);
	printf("%s", p);
	return 0;
}
