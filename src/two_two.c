#include "../inc/minilibmx.h"

int two_two(char *c1, char *c2, char *c3, char *c4, char *c5, int a) {
    int i = 0;

    if(mx_atoi(c1) == 10 || mx_atoi(c2) == 10
       || mx_atoi(c3) == 10 || mx_atoi(c4) == 10
       || mx_atoi(c2) == 10) 
    {
        if (mx_atoi(c1) == mx_atoi(c2) 
            || mx_atoi(c1) == mx_atoi(c3) 
            || mx_atoi(c1) == mx_atoi(c4)  
            || mx_atoi(c1) == mx_atoi(c5)) 
        {
            i++;
        }
        if (mx_atoi(c2) == mx_atoi(c3) 
            || mx_atoi(c2) == mx_atoi(c3) 
            || mx_atoi(c2) == mx_atoi(c4)) 
        {
            i++;
        }
        if (mx_atoi(c3) == mx_atoi(c4) 
            || mx_atoi(c3) == mx_atoi(c5))  {
            i++;
        }
        if (mx_atoi(c4) == mx_atoi(c5)) {
            i++;
        }
    } else {
    if (c1[0] == c2[0] || c1[0] == c3[0] 
        || c1[0] == c4[0]  || c1[0] == c5[0]) 
    {
        i++;
    }
    if (c2[0] == c3[0] || c2[0] == c4[0] 
        || c2[0] == c5[0]) 
    {
        i++;
    }
    if (c3[0] == c4[0] || c3[0] == c5[0]) 
    {
        i++;
    }
    if (c4[0] == c5[0]) {
        i++;
    }
    }
    if(i == 2)
        return 2;
    return a;
}

