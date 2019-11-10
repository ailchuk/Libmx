#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    int len = 0;
    int i = 0;
    unsigned long base = 1;
    unsigned long res = 0;

    while (hex[i++])
        len++;

    for (int j = len - 1; j >= 0; j--) {
        if (hex[j] >= 'a' && hex[j] <= 'f') {
            res += (hex[j] - 87) * base;
            base *= 16;
        }
        else if (hex[j] >= 'A' && hex[j] <= 'F') {
            res += (hex[j] - 55) * base;
            base *= 16;
        }
        else if (hex[j] >= '0' && hex[j] <= '9') {
            res += (hex[j] - 48) * base;
            base *= 16;
        }
    }
    return res;
}
