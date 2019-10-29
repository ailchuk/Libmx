#include "libmx.h"

char *mx_file_to_str(const char *file)
{
    if (file) 
    {
        FILE *fp = fopen(file, "r"); 
        if (fp == NULL) 
            return NULL; 
    
        // Read contents from file 
        char c = fgetc(fp); 
        while (c != EOF) 
        { 
            write(1, &c, 1); 
            c = fgetc(fp); 
        } 
    
        fclose(fp); 
        return 0; 
    }
    else
        return NULL;
}

int main()
{
    printf("%s\n", mx_file_to_str("mx_printch")); // NULL
    
    mx_file_to_str("mx_printchar.c");
}
