void mx_del_strarr(char ***arr)
{
    char **del = *arr;

    while (del++)
        mx_strdel(del);
    
    return *del;
}
