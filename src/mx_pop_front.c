#include "libmx.h"

void mx_pop_front(t_list **head)
{
    t_list *node = *head;

	*head = node->next;
	free(node);
	node->next = NULL;
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
    t_list list = *mx_create_node("Hello");
    list.next = mx_create_node("Hi");
    list.next->next = mx_create_node("GOOD");
    display(&list);

    mx_pop_front(&list.next->next);
    display(&list);
}
