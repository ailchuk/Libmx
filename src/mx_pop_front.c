#include "libmx.h"

void mx_pop_front(t_list **head) {
    if (head == NULL) 
        return;
    if((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    else {
        t_list *ptr = (*head)->next;
        (*head)->data = NULL;
        free(*head);
        *head = ptr;
    }
}
