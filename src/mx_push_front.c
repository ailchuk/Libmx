#include "libmx.h"

void mx_push_front(t_list **list, void *data)
{
    if (!list || !data) return;
    t_list *node = mx_create_node(data);

    node->next = *list;
    *list = node;
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

    mx_push_front(&list, "DEBIL");
    display(list);
}
