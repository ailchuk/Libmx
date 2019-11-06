#include "libmx.h"

static void swap(void **l1, void **l2) {
    void *tmp = *l1;
    *l1 = *l2;
    *l2 = tmp;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    t_list *head = NULL, *tmp = list, *tmp = list;
    void *swap_data;

    while(list) {
        head = tmp;
        while(head) {
            if(head->next && cmp(head->data,head->next->data))
                swap(&node2->data, &node2->next->data);
        head = head->next;
    }
        list = list->next;
    }
    return tmp;
}
