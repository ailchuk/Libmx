#include "libmx.h"

// Func to display node!!
void display(t_list *head)
{
   while (head != NULL)
   {
       printf("%s ", head->data);
       head = head->next;
   }
   printf("\n");
}
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *a, void *b))
{
    t_list *tmp = NULL;
    t_list *buf = lst;
    t_list *curr = lst;
    void *swap;
    
    while (lst)
    {
        tmp = buf;
        while(tmp)
        {
            if(tmp->next && cmp(tmp->data, tmp->next->data))
            {
                swap = tmp->data;
                tmp->data = tmp->next->data;
                tmp->next->data = swap;
            }
            tmp = tmp->next;
        }
        lst = lst->next;
    }
    return curr;
}

int main()
{
    t_list *list = mx_create_node("DDD");
    list->next = mx_create_node("CCC");
    list->next->next = mx_create_node("BBB");
    list->next->next->next = mx_create_node("AAA");
    display(list);
    mx_sort_list();
}
