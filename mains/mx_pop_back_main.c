#include "libmx.h"

int main() {
	char *a = "papa";
	char *b = "mama";
    t_list *head = mx_create_node(a);
    t_list *s1 = mx_create_node(b);
    head->next = s1;
    mx_pop_back(&head);

    /*t_list *q = head;
    while (q && q->next != NULL) {
        q = q->next;
    }
    printf("%s ", head->data);
    printf("%s ", q->data);*/
    mx_printlist(head);
    return 0;
}
