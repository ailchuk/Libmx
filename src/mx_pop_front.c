#include "libmx.h"

void mx_pop_front(t_list **head)
{
    if (head == NULL) return;
    
    if((*head)->next == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }
    else
    {
        t_list *ptr = (*head)->next;
        free(*head);
        *head = ptr;
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

    mx_pop_front(&list);
    display(list);
}
