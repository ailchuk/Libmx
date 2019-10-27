#ifndef LIBMX_H
#define LIBMX_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void mx_printchar(char c);
void mx_print_unicode(wchar_t c); // NONE
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_print_strarr(char **arr, const char *delim); // #KK
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);
char *mx_nbr_to_hex(unsigned long nbr); // NONE
unsigned long mx_hex_to_nbr(const char *hex);
char *mx_itoa(int number); // NONE
void mx_foreach(int *arr, int size, void (*f)(int));
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_strcmp(const char *s1, const char *s2);
int mx_bubble_sort(char **arr, int size);
int mx_quicksort(char **arr, int left, int right); // NONE
void mx_swap_char(char *s1, char *s2);
void mx_str_reverse(char *s); // #KK
void mx_strdel(char **str); // #KK 
void mx_del_strarr(char ***arr); // #KK CHECK LATER!
int mx_get_char_index(const char *str, char c); // #KK but TEST IT
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n); // NONE
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strcat(char *restrict s1, const char *restrict s2); // #KK
char *mx_strstr(const char *haystack, const char *needle); // KK TEST IT OR REWRITE!!!!!!!!
int mx_get_substr_index(const char *str, const char *sub); // KK
int mx_count_substr(const char *str, const char *sub); // NONE 
int mx_count_words(const char *str, char delimiter); // test it!!!! and change!
// char *mx_strtrim(const char *str); // NONE
// char *mx_del_extra_spaces(const char *str); // NONE
// char **mx_strsplit(const char *s, char c); // NONE
char *mx_strjoin(const char *s1, const char *s2); // #KK
// char *mx_file_to_str(const char *file); // NONE
// int mx_read_line(char **lineptr, int buf_size, int delim, const int fd); // NONE
// char *mx_replace_substr(const char *str, const char *sub, const char *replace); // NONE

// #memory pack

void *mx_memset(void *b, int c, size_t len); // KK but test it
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n); // KK
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n); // #KK DONE
int mx_memcmp(const void *s1, const void *s2, size_t n); // KK
void *mx_memchr(const void *s, int c, size_t n); // KK
void *mx_memrchr(const void *s, int c, size_t n); // KK
// void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len); // NONE
// void *mx_memmove(void *dst, const void *src, size_t len); // NONE
// void *mx_realloc(void *ptr, size_t size); // NONE

// #list pack
typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

t_list *mx_create_node(void *data); // NONE
void mx_push_front(t_list **list, void *data); // KK
void mx_push_back(t_list **list, void *data); // KK
void mx_pop_front(t_list **head); // HZ CHECK IT
void mx_pop_back(t_list **head); // HZ CHECK IT
int mx_list_size(t_list *list); // KK 
// t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)); // NONE



#endif
