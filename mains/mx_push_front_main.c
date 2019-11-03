#include "libmx.h"

int main() {
    t_list *t = mx_create_node("mama"); // check for NULL as well
    mx_push_front(&t, "papa");
    //t = t->next;
    mx_printlist(t);
    return 0;
}
