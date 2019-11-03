#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
    unsigned long tmp = nbr;
    int len = 0;
    char *res = NULL;
    int i = 0;

    if (nbr == 0)
        return "0";
    while (tmp > 0)
    {
        tmp /= 16;
        len++;
    }
    res = mx_strnew(len);
    i = len - 1;
    while (nbr > 0) 
    {
        int tmp = nbr % 16;

        if (tmp < 10) {
            res[i] = tmp + '0';
        }
        else {
            res[i] = tmp + 87;
        }
        nbr /= 16;
        i--;
    }
    return res;
}
