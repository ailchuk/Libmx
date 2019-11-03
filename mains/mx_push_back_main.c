#include "libmx.h"

int main() {
    char *a = "One";
    char *b = "tow";
    char *c = "back";
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    head->next = s1;
    mx_push_back(&head, c);
    
    mx_displaylist(head);
}

