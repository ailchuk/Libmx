#include "libmx.h"

int main() {   
    t_list *s = mx_create_node("dojo");
    printf("%s", s->data);
    return 0;
}
