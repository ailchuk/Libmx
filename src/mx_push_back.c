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

// Func to display node!!

void display(t_list *head)
{
    while (head != NULL)
    {
        printf("%s   ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() 
{
    t_list *list = mx_create_node("Hello");
    list->next = mx_create_node("Hi");
    list->next->next = mx_create_node("GOOD");
    display(list);

    mx_push_back(&list, "DEBIL");
    display(list);
    while (true)
        printf("\tBAIdARKa DEBIL \t");
    
}
