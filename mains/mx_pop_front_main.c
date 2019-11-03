#include "libmx.h"
int main() {
    t_list *head = mx_create_node("odin");
    t_list *head2 = mx_create_node("dva");
    t_list *h3 = mx_create_node("DEL");
    head->next = head2;
    head2->next = h3;
    h3->next = mx_create_node("Fourth");
    mx_pop_front(&head);

    mx_displaylist(head);
}
