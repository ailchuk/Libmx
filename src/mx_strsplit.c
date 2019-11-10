#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s || mx_get_char_index(s, c) == -1)
        return NULL;

    int size_arr = mx_count_words(s, c);
    char **arr = malloc((sizeof(char *) * (size_arr + 1)));
    int len = mx_strlen(s);
    int id = 0;
    int j = 0;
    for (int i = 0; i < len; i++) {
        id = mx_get_char_index(s, c);
        id = id == -1 ? mx_strlen(s) : id;
        if (id) {
            arr[j] = mx_strndup(s, id);
            s += mx_strlen(arr[j]) - 1;
            i += mx_strlen(arr[j]) - 1;
            j++;
        }
        s++;
    }
    arr[size_arr] = NULL;
    return arr;
}
