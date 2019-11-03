#include "libmx.h"

int main(){
    char *c = "t.txt";
    printf("%s\n", mx_file_to_str(c));
    return 0;
}
