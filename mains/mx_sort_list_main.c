#include "../src/libmx.h"

bool cmp(void *a, void *b) {
	if (*(char *)a > *(char *)b)
		return true;
	else return false;
}

int main() {
    /*char *a = "6";
    char *b = "4";
    char *c = "8";
    char *d = "2";*/
    t_list *head = mx_create_node("qqq");
    t_list *s1 = mx_create_node("aaa");
    t_list *s2 = mx_create_node("bbb");
    t_list *s3 = mx_create_node("ccc");
    head->next = s1;
    s1->next = s2;
    s2->next = s3;
    
	mx_displaylist(head);
	printf("\n");
    t_list *f = mx_sort_list(head, cmp);
    mx_displaylist(f);
    return 0;
    system("leaks a.out");
}
