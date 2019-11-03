#include "libmx.h"

int main() 
{
    t_list *list = mx_create_node("Hello");
    list->next = mx_create_node("Hi");
    list->next->next = mx_create_node("GOOD");
    t_list *l1 = mx_create_node("DEBOA");
    list->next->next->next = l1;
    display(list);
    printf("%d\n", mx_list_size(list));
}

