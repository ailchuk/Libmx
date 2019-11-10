// #include "libmx.h"
// #include <stdio.h>
// #include <string.h>
// int main()
// {
  
 /* char *arr[] = {"Try", "agein", "please", NULL};
    char delim = ' ';
    mx_print_strarr(arr, &delim);
 
    char str[] = "Michael";
    mx_printint(mx_get_char_index(str, 'c'));
    mx_printint(mx_get_char_index(NULL, 'c'));
    mx_printint(mx_get_char_index(str, 'r'));
  
    char s1[17] = "Michael ";
    char s2[] = "Boiko";
    mx_printstr(mx_strcat(s1, s2));
 
    char dst[10];
    char src[8] = "Michael";
    mx_strncpy(dst, src, 3);
    mx_printstr(mx_strncpy(dst, src, 9));
  
    char **arr = {"asd", "asdf", "asdfg", "asdfgh", NULL};
    mx_del_strarr(&arr);
  
    char str[] = "Michael";
    mx_printstr(mx_strndup(str, 4));
  
    char str1[] = "Follow the white rebbit";
    char str2[] = "iter";
    if (mx_strstr(str1, str2) == NULL)
    {
	mx_printint(1);
    }
    else
    {
	mx_printstr(mx_strstr(str1, str2));
    }
    
    mx_printint(mx_get_substr_index("McDonalds", "Don")); //returns 2
    mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
    mx_printint(mx_get_substr_index("McDonalds", "Donatello")); //returns -1
    mx_printint(mx_get_substr_index("McDonalds", NULL)); //returns -2
    mx_printint(mx_get_substr_index(NULL, "Don")); //returns -2
  
    char str[] = "yyyyyy y  yyy  y, yo, yo  y Nyo";
    char sub[] = "  y";
    mx_printint(mx_count_substr(str, sub));
    mx_printint(mx_count_substr(NULL, sub));
    mx_printint(mx_count_substr(str, NULL));
  
    char name[] = "     a a a";
   // char name[] = "  ";
    char *s1 = mx_strtrim(name);
    if(s1 == NULL)
    {
	mx_printint(1);
    }
    else
    {
	mx_printstr(s1);
    }
  
    char name[] = "\f  My\n name...     is  \r Neo  \t\n ";
   // char name[] = "  ";
    char *s1 = mx_del_extra_spaces(name);
    if(s1 == NULL)
    {
        mx_printint(1);
    }
    else
    {
        mx_printstr(s1);
    }
  
    char s1[] = "**Good bye,**Mr.*Anderson.****";
    char s2[] = "     Knock, knock,    Neo.   ";
    char **arr1 = mx_strsplit(s1, '*');
    char **arr2 = mx_strsplit(s2, ' ');
    for(int i = 0; arr1[i] != NULL; i++)
    {
	mx_printstr(arr1[i]);
    }
    mx_printchar('\n');
    for(int i = 0; arr2[i] != NULL; i++)
    {
        mx_printstr(arr2[i]);
    }
  
    char str1[] = "this";
    char str2[] = "dodge ";
    char *str3 = NULL;
    mx_printstr(mx_strjoin(str2, str1));
    mx_printchar('\n');
    mx_printstr(mx_strjoin(str1, str3));
    mx_printchar('\n');
    printf("%s\n", mx_strjoin(str3, str3));

    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts")); //returns "McDonuts"
    printf("%s\n", mx_replace_substr("yyyyr", "yy", "ta")); //returns "Utata tuta"
  
    char s[] = "0123456789";
    printf("%s\n", mx_memset(s, '1', 5));
  
    char s[] = "0123456789";
    char ss[10] = "";
    printf("%s\n", mx_memcpy(ss, s, 9));
    printf("%s\n", memcpy(ss, s, 9));
	return 0;

    char s1[11] = "0123456789";
    char ss1[11] = "";
    printf("%s\n", mx_memccpy(ss1, s1, '5', 9));
    printf("%s\n", memccpy(ss1, s1, '5', 9));
  
    char s2[11] = "012456789";
    char ss2[11] = "013456789";
    printf("%d\n", mx_memcmp(s2, ss2, 4));
    printf("%d\n", memcmp(s2, ss2, 4));
 
    char s3[11] = "0123456789";
    printf("%s\n", mx_memchr(s3, '6', 8));
    printf("%s\n", memchr(s3, '6', 8));
  
    printf("%s\n", mx_memrchr("Trinity", 'i', 7));  //returns "ity"
    printf("%s\n", mx_memrchr("Trinity", 'M', 7));  //returns NULL
  
    char big[] = "helollo";
    char little[] = "l";
    printf("%s\n", mx_memmem(big, 16, little, 1));
  
    char dst[11] = "0123456789";
    char src[11] = "0123456789";
    printf("%s\n", mx_memmove(&dst[4], &dst[3], 3));
    printf("%s\n", memmove(&src[4], &src[3], 3));
  
    char *str = mx_strnew(6);
    str = "asasd";
    str = mx_realloc(str, 7);
    str = mx_strcat(str, ".");
    printf("%s\n", str);
  
    char str[] = "Michael";
    t_list *s = mx_create_node(str);
    char str2[] = "Boiko";
    mx_push_front(&s, str2);
    while(s)
    {
	printf("%s\n", s->data);
        s = s->next;
    }
    // pop_front
    char str1[] = "Michael";
    t_list *s1 = mx_create_node(str1);
    char str3[] = "Boiko";
    mx_push_back(&s1, str3);
    mx_pop_front(&s1);
    while(s1)
    {
        printf("%s\n", s1->data);
        s1 = s1->next;
    }
    
    char str1[] = "Michael";
    t_list *s1 = mx_create_node(str1);
    char str3[] = "Boiko";
    mx_push_back(&s1, str3);
    mx_pop_back(&s1);
    while(s1)
    {
        printf("%s\n", s1->data);
        s1 = s1->next;
    }
   
    char str5[] = "Michael";
    t_list *s5 = mx_create_node(str5);
    char str7[] = "Boiko";
    mx_push_back(&s5, str7);
    printf("%d\n", mx_list_size(s5));
   */
    
//}

#include "inc/libmx.h"
#include <stdio.h>
#include <time.h>

bool cmp(void *a, void *b) {
    char *ta = a;
    char *tb = b;
    if(mx_strcmp(ta, tb) > 0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{   
    //TEST CASES!!!

    //mx_quicksort
    printf("%s\n", "\x1b[36mTEST FOR mx_quicksort\033[0m");
    char *sort_test[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    if((mx_quicksort(sort_test, 0, 3)) == 2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: {/Michelangelo/, /Donatello/, /Leonardo/, /Raphael/}, 0, 3\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: {/Michelangelo/, /Donatello/, /Leonardo/, /Raphael/}, 0, 3\033[0m");
    }
    printf("%c", '\n');

    // mx_get_char_index
    printf("%s\n", "\x1b[36mTEST FOR mx_get_char_index\033[0m");
    int res1 = mx_get_char_index("123", '2');
    printf("%d\n", res1);
    int res2 = mx_get_char_index(NULL, '7');
    int res3 = mx_get_char_index("123", '7');
    if(res1 == 1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 123, 2\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 123, 2\033[0m");
    }
    if(res2 == -2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: null, 2\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: null, 2\033[0m"); 
        
    }
    if(res3 == -1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 123, 7\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 123, 7\033[0m");
    }
    printf("%c", '\n');

    //mx_strndup//
    printf("%s\n", "\x1b[36mTEST FOR mx_strndup\033[0m");

    if((mx_strcmp(mx_strndup("122", 2), "123") < 0)) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 123, 4\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 123, 4\033[0m");
    }
    printf("%c", '\n');
    
    // //mx_strndup//
    printf("%s\n", "\x1b[36mTEST FOR mx_strcpy\033[0m");
    char src[]="12345226789";
    char dst[]= "1111111111";
    mx_strncpy(dst, src, 3);
    if(mx_strlen(dst) == 10) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 12345226789, 1111111111, 3\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 12345226789, 1111111111,3\033[0m");
    }
    printf("%c", '\n');
    
    //mx_strcat//
    printf("%s\n", "\x1b[36mTEST FOR mx_strcat\033[0m");
    char test_s1[20] = "hello";
    char test_s2[] = "there";
    if((mx_strlen(mx_strcat(test_s1, test_s2))) == 10) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: hello, there\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: hello, there\033[0m");
    }
    printf("%c", '\n');
    
    //mx_strstr//
    printf("%s\n", "\x1b[36mTEST FOR mx_strcpy\033[0m");
    if (mx_strstr("12a34", "2a1") == NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 12a34, 2a1\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 12a34, 2a1\033[0m");
    }
    if (mx_strstr("1234", "23") != NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 1234, 23\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 1234, 23\033[0m");
    }
    printf("%c", '\n');
    
    //mx_get_substr_index//
    printf("%s\n", "\x1b[36mTEST FOR mx_get_substr_index\033[0m");
    
    if(mx_get_substr_index("McDonalds", "Don") == 2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: McDonalds, Don\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: McDonalds, Don\033[0m");
    }
    if(mx_get_substr_index("McDonalds Donuts", "on") == 3) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: McDonalds, Donuts\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: McDonalds, Donuts\033[0m");
    }
    if (mx_get_substr_index("McDonalds", "Donatello") == -1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: McDonalds, Donatello\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: McDonalds, Donatello\033[0m");
    }
    if(mx_get_substr_index("McDonalds", NULL) == -2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: McDonalds, null\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: McDonalds, null\033[0m");
    }
    if(mx_get_substr_index(NULL, "Don") == -2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: null, Don\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: null, Don\033[0m");
    }
    printf("%c", '\n');
    
    //mx_count_substr//
    printf("%s\n", "\x1b[36mTEST FOR mx_count_substr\033[0m");
    if(mx_count_substr("yo, yo, yo Neo", "yo") == 3) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: yo, yo, yo Neo, yo\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: yo, yo, yo Neo, yo\033[0m");
    }
    if(mx_count_substr("yo, yo, yo Neo", NULL) == -1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: yo, yo, yo Neo, NULL\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: yo, yo, yo Neo, NULL\033[0m");
    }
    if(mx_count_substr(NULL, "yo") == -1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: NULL, yo\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: NULL, yo\033[0m");
    }
    if(mx_count_substr("he  l  o", "lo") == 0) {
        printf("%s\n", "\x1b[33mOK FOR INPUTS: \"he  l  o\", lo, if answer is 0\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"he  l  o\", lo\033[0m");
    }
    printf("%c", '\n');
    
    //mx_count_words//
    printf("%s\n", "\x1b[36mTEST FOR mx_count_words\033[0m");
    if(mx_count_words(" follow * the white rabbit ", '*') == 2) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: / follow * the white rabbit /, *\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: / follow * the white rabbit /, *\033[0m");
        printf("%d\n", mx_count_words(" follow * the white rabbit ", '*'));
    }
    if (mx_count_words(" follow * the white rabbit ", ' ') == 5) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: / follow * the white rabbit /, / /\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: / follow * the white rabbit /, / /\033[0m");
    }
    if(mx_count_words(NULL, ' ') == -1) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: null, / /\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: FOR INPUTS: null, / /\033[0m");
    }
    printf("%c", '\n');

    //mx_strtrim//
    printf("%s\n", "\x1b[36mTEST FOR mx_strtrim\033[0m");
    if(mx_strlen(mx_strtrim("\t\t\t 1223")) == 4) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: \"\\t\\t\\t 1223\"\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"\\t\\t\\t 1223\"\033[0m");
    }
    if(mx_strtrim(NULL) == NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: NULL\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: NULL\033[0m");
    }
    if(mx_strlen(mx_strtrim("1223")) == 4) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: 1223\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: 1223\033[0m");
    }
    printf("%c", '\n');

    //mx_del_extra_spaces
    printf("%s\n", "\x1b[36mTEST FOR mx_del_extra_spaces\033[0m");
    if(mx_strlen(mx_del_extra_spaces("\f  My name...   \r  is   Neo  \t\n")) == 17) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: \"\\f  My name... is Neo  \\t\\n\"\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"\\f  My name... is Neo  \\t\\n\"\033[0m");
    }
    if(mx_del_extra_spaces(NULL) == NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: NULL\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: NULL\033[0m");
    }
    printf("%c", '\n');

    //mx_strsplit
    printf("%s\n", "\x1b[36mTEST FOR mx_strsplit\033[0m");
    char **test = mx_strsplit("**Good bye,**Mr.*Anderson.****", '*');
    if(mx_strcmp(test[0], "Good bye,") == 0) {
        printf("%s", "Good bye,");
        printf("%s", "\x1b[32m OK\033[0m");
    }
    else {
        printf("%s", "Good bye,");
        printf("%s", "\x1b[31m FILED\033[0m");
    }
    printf("%c", '\n');
    if(mx_strcmp(test[1], "Mr.") == 0) {
        printf("%s", "Mr.");
        printf("%s", "\x1b[32m OK\033[0m");
    }
    else {
        printf("%s", "Mr.");
        printf("%s", "\x1b[31m FILED\033[0m");
    }
    printf("%c", '\n');
    if(mx_strcmp(test[2], "Anderson.") == 0) {
        printf("%s", "Anderson.");
        printf("%s", "\x1b[32m OK\033[0m");
    }
    else {
        printf("%s", "Anderson.");
        printf("%s", "\x1b[31m FILED\033[0m");
    }
    printf("%c", '\n');
    printf("%c", '\n');

    //mx_strjoin
    printf("%s\n", "\x1b[36mTEST FOR mx_strjoin\033[0m");
    if(mx_strcmp("dodge this", mx_strjoin("dodge ", "this")) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: \"dodge \", \"this\"\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"dodge \", \"this\"\033[0m");
    }
    if(mx_strcmp("dodge ", mx_strjoin("dodge ", NULL)) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: \"dodge \", NULL\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"dodge \", NULL\033[0m");
    }
    if(mx_strcmp("this", mx_strjoin(NULL, "this")) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: NULL, \"dodge \"\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: NULL, \"dodge \"\033[0m");
    }
    printf("%c", '\n');
    
    // mx_file_to_str
    // printf("%s\n", "\x1b[36mTEST FOR mx_file_to_str\033[0m");
    // if(mx_strcmp("12345", mx_file_to_str("test.txt")) == 0) {
    //     printf("%s\n", "\x1b[32mOK FOR INPUTS: 12345 in test.txt\033[0m");
    // } else {
    //     printf("%s\n", "\x1b[31mFILED FOR INPUTS: 12345 in test.txt\033[0m");
    // }
    // printf("%c", '\n');
    
    //mx_replace_substr
    printf("%s\n", "\x1b[36mTEST FOR mx_replace_substr\033[0m");
    if(mx_strcmp("McDonuts", mx_replace_substr("McDonalds", "alds", "uts")) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS: \"McDonalds\", \"ald\", \"1\"\033[0m");
    } 
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"McDonalds\", \"ald\", \"1\"\033[0m");
    }
    if(mx_replace_substr("McDonalds", "alds", NULL) == NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"McDonalds\", \"alds\", NULL\033[0m");
    } 
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"McDonalds\", \"alds\", NULL\033[0m");
    }
    if(mx_replace_substr("McDonalds", NULL, "123") == NULL) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"McDonalds\", NULL, \"123\"\033[0m");
    } 
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS: \"McDonalds\", \"alds\", NULL\033[0m");
    }
    printf("%c", '\n');

    //mx_memset
    printf("%s\n", "\x1b[36mTEST FOR mx_memset\033[0m");
    char test1[] = "die";
    char test2[] = "die";
    const char test3[] = "1";
    if(mx_strcmp(test1, mx_memset(test1, 97, 1)) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"die\", 97, 1\033[0m");    
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"die\", 97, 1\033[0m");
    }
    printf("%c", '\n');
    printf("%s\n", "\x1b[36mTEST FOR mx_memspy\033[0m");
    if(mx_strcmp("1ie", mx_memcpy(test2, test3, 1)) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"die\", \"die\", 1\033[0m");   
    }
    else {
        printf("%s\n", "\x1b[31mFILED OR INPUTS:  \"die\", \"die\", 1\033[0m");
    }
    printf("%c", '\n');

    //mx_memccpy
    printf("%s\n", "\x1b[36mTEST FOR mx_memccpy\033[0m");
    char d[] = "98765432198";
    char s[] = "0123456789";    
    if(mx_memccpy(d, s, 's', 7) == NULL) {
        printf("%s\n", "\x1b[32mtest1 OK\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED test1\033[0m");
    }
    char u[] = "98765432198";
    char v[] = "0123456789";
    if(mx_strcmp("32198", mx_memccpy(u, v, '5', 7)) == 0) {
        printf("%s\n", "\x1b[32mtest2 OK\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED test2\033[0m");
    }
    printf("%c", '\n');

    //mx_memcmp
    printf("%s\n", "\x1b[36mTEST FOR mx_memcmp\033[0m");
    if(mx_memcmp("1234", "1a34", 2) != 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"1234\", \"1a34\", 2\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"1234\", \"1a34\", 2\033[0m");
    }
    if(mx_memcmp("1234", "1234", 200) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"1234\", \"1234\", 200\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"1234\", \"1234\", 200\033[0m");
    }
    printf("%c", '\n');

    //mx_memchr
    printf("%s\n", "\x1b[36mTEST FOR mx_memchr\033[0m");
    if(mx_strcmp("234", mx_memchr("1234", 50, 4)) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"1234\", 50, 4\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"1234\", 50, 4\033[0m");
    }
    printf("%c", '\n');

    //mx_memrchr
    printf("%s\n", "\x1b[36mTEST FOR mx_memrchr\033[0m");
    if(mx_strcmp("ity", mx_memrchr("Trinity", 'i', 7)) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"Trinity\", \'i\', 7\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"Trinity\", \'i\', 7\033[0m");
    }
    printf("%c", '\n');

    //mx_memmem
    printf("%s\n", "\x1b[36mTEST FOR mx_memmem\033[0m");
    if(mx_strcmp("123taa", (mx_memmem("aaa123taa", 7, "123", 3))) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"aaa123taa\", 7,  \"123\", 3\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"aaa123taa\", 7,  \"123\", 3\033[0m");
    }
    printf("%c", '\n');

    //mx_memmove
    printf("%s\n", "\x1b[36mTEST FOR mx_memmove\033[0m");
    char test_dst1 []= "1234567890";
    mx_memmove(&test_dst1[4], &test_dst1[3], 3);
    if (mx_strcmp("1234456890", test_dst1) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"1234567890\", \"567890\",  \"4567890\", 3\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"1234567890\", \"567890\",  \"4567890\", 3\033[0m");
    }
    printf("%c", '\n');

    //mx_realoc
    printf("%s\n", "\x1b[36mTEST FOR mx_realoc\033[0m");
    char *test_relloc = (char *) malloc(10 * sizeof(char));
    for (size_t i = 0; i < 10; i++) {
        test_relloc[i] = 'a';
    }
    char *test_relloc1 = mx_realloc(test_relloc, 120);
    for (size_t i = 0; i < 120; i++)
    {
        test_relloc1[i] = '1';
    }
    if(mx_strlen(test_relloc1) == 120) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"aaaaaaaaaa\", 120\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"aaaaaaaaaa\", 120\033[0m");
    }
    printf("%c", '\n');
    
    printf("%s\n", "\x1b[36mTEST FOR mx_create_node\033[0m");
    
    t_list *test_tlist1 = mx_create_node("123");
    if(mx_strcmp("123", test_tlist1->data) == 0) {
        printf("%s\n", "\x1b[32mOK FOR INPUTS:  \"123\"\033[0m");
    }
    else {
        printf("%s\n", "\x1b[31mFILED FOR INPUTS:  \"123\"\033[0m");
    }
    printf("%c", '\n');
    
    t_list *node1 = mx_create_node("2");
    t_list *node2 = mx_create_node("1");
    node1->next = node2;
    node2->next = NULL;

    printf("%s\n", "\x1b[36mTEST FOR mx_list_size\033[0m");
    if(mx_list_size(node1) == 2) {
        printf("%s\n%d", "\x1b[32mOK FOR INPUTS:  two nodes \033[0m", mx_list_size(node1));
         printf("\n node1  == TRUE");

    }
    else {
        printf("%s\n%d", "\x1b[31mFILED FOR INPUTS:  two nodes \033[0m", mx_list_size(node1));
         printf("\n\n");
    mx_displaylist(node1);
    printf("\n\n == ELSE");
    }
    printf("%c", '\n');
   
    printf("%s\n", "\x1b[36mTEST FOR mx_sort_list\033[0m");
    printf("%s\n", "INPUTS: 2,1");
    printf("%s", "OUTPUTS: ");
    mx_sort_list(node1, cmp);
    while(node1->next != NULL) {
        printf("%s ", node1->data);
        node1 = node1->next;
    }
    printf("%s ", node1->data);
    
    return 0;
}
