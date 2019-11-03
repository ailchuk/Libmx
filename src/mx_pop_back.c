#include "libmx.h"

void mx_pop_back(t_list **head)
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
		t_list *ptr = *head;
		while(ptr && ptr->next->next != NULL)
			ptr = ptr->next;
		free(ptr->next);
		ptr->next = NULL;
	}
}
