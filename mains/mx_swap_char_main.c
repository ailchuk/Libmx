#include "libmx.h"

int main () {
	char str[] = "ONE";
	mx_swap_char(&str[0], &str[1]);
	mx_swap_char(&str[1], &str[2]);
	printf("%s\n", str);
	return 0;

}
