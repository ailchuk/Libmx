#include <stdio.h>

char *mx_strcat(char *s1, const char *s2);

int main(void) {
  char str[100];
  strcpy(str, "Эти " );                // скопировать строку "Эти" в str
 
  // добавить к строке str строку, передаваемую во втором параметре
  mx_strcat( str, "строки "          );
  printf("%s\n", str);
  mx_strcat( str, "объединены "    );
  printf("%s\n", str);
  mx_strcat( str, "операцией "      );
  printf("%s\n", str);
  mx_strcat( str, "конкатенации." );
  printf("%s\n", str);
}
