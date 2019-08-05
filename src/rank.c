#include "../inc/minilibmx.h"

bool rank(char *c) {
    int a = mx_atoi(c);

    if(a < 2 || a > 10)
        return 0;
    else
        return 1;
}
