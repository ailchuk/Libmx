#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
    if (!list || !data) return;
    t_list *new = mx_create_node(data);
    if (!new) return;
    t_list *last = *list;
    
    if (*list == NULL) {
	    *list = new;
        return;
    }
    else
    {
        while (last->next != NULL)
            last = last->next;
        last->next = new;
    }
}
