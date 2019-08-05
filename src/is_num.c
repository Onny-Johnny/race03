#include "../inc/minilibmx.h"

bool is_num(const char *str) {
    int i = 0;
    int countlen = 0;

    while (str[countlen] != '\0')
        countlen++;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (mx_isdigit(str[i] - '0') && str[i] != '\0')
        i++;
    if (i == countlen) 
        return true;
    return false;
}
