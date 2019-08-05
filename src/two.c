#include "../inc/minilibmx.h"

int two(char *c1, char *c2, char *c3, char *c4, char *c5) {
    if(mx_atoi(c1) == 10 || mx_atoi(c2) == 10
       || mx_atoi(c3) == 10 || mx_atoi(c4) == 10
       || mx_atoi(c2) == 10) 
    {
        if (mx_atoi(c1) == mx_atoi(c2) 
            || mx_atoi(c1) == mx_atoi(c3) 
            || mx_atoi(c1) == mx_atoi(c4)  
            || mx_atoi(c1) == mx_atoi(c5)) 
        {
            return 1;
        }
        if (mx_atoi(c2) == mx_atoi(c3) 
            || mx_atoi(c2) == mx_atoi(c3) 
            || mx_atoi(c2) == mx_atoi(c4)) 
        {
            return 1;
        }
        if (mx_atoi(c3) == mx_atoi(c4) 
            || mx_atoi(c3) == mx_atoi(c5))  {
            return 1;
        }
        if (mx_atoi(c4) == mx_atoi(c5)) {
            return 1;
        }
    }
    if (c1[0] == c2[0] || c1[0] == c3[0] 
        || c1[0] == c4[0]  || c1[0] == c5[0]) 
    {
        return 1;
    }
    if (c2[0] == c3[0] || c2[0] == c4[0] 
        || c2[0] == c5[0]) 
    {
        return 1;
    }
    if (c3[0] == c4[0] || c3[0] == c5[0]) 
    {
        return 1;
    }
    if (c4[0] == c5[0]) {
        return 1;
    }
    return 0;
}


