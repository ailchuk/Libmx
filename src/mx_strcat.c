#include "libmx.h"

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strcat(char *s1, const char *s2)
{
    mx_strcpy((s1 + mx_strlen(s1)), s2);
    return s1;
}

int main () {
   char src[50];
   char dest[50];

   mx_strcpy(src,  "This is source");
   mx_strcpy(dest, "This is destination");

   mx_strcat(dest, src);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}
