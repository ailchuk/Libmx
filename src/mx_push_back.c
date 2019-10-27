#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
    t_list *node = mx_create_node(data);

    t_list *tmp = *list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = node;
}

int main() 
{
    t_list listok = *mx_create_node("HellO");
    listok.next = mx_create_node("hi");

    printf("%s\n", listok.data);    
    printf("%s\n", listok.next->data);
    // 1 hello
    // 2 hi

    puts("\t\t PUSHED BACK\n");

    mx_push_back(listok.next->data, listok.data);
    printf("%s\n", listok.data);    
    printf("%s\n", listok.data);

}
