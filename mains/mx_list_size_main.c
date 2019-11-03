#include "libmx.h"

int main() {
    char *a = "papa";
    char *b = "mama";
    char *c = "ss";
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    head->next = s1;
    t_list *s2 = mx_create_node(c);
    s1->next = s2;
    
    int k = mx_list_size(head);
    printf("%d", k);
    return 0;
}
