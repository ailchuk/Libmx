#include "libmx.h"

int main() {
    char *a = "ma";
    char *b = "pa";
    char *c = "ss";
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    head->next = s1;
    mx_push_back(&head, c);
    
    /*t_list *q = head;
    while (q && q->next != NULL) {
        q = q->next;
    }
    printf("%s ", head->data);
    printf("%s ", s1->data);
    printf("%s ", q->data);*/
    
    mx_printlist(head);
    return 0;
}
