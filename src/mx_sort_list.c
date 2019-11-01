#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *a, void *b)) {
    t_list *head = NULL;
    t_list *store = lst;
    t_list *tmp = lst;
    void *swap;

    while(lst) 
    {
        head = store;
        while(head) 
        {
            if(head->next && cmp(head->data, head->next->data))
            {
                swap = head->data;
                head->data = head->next->data;
                head->next->data = swap;
            }
            head = head->next;
        }
        lst = lst->next;
    }
    return tmp;
}
