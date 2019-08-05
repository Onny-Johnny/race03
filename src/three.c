#include "../inc/minilibmx.h"

int three(char *c1, char *c2, char *c3, char *c4, char *c5, int a) {
    if(mx_atoi(c1) == 10 || mx_atoi(c2) == 10
       || mx_atoi(c3) == 10 || mx_atoi(c4) == 10
       || mx_atoi(c2) == 10) 
    {
        if (((mx_atoi(c1) == mx_atoi(c2)) && (mx_atoi(c2) == mx_atoi(c3))) 
            || ((mx_atoi(c1) == mx_atoi(c3)) && (mx_atoi(c3) == mx_atoi(c4)))
            || ((mx_atoi(c1) == mx_atoi(c4)) && (mx_atoi(c4) == mx_atoi(c5))))
        {
            return 3;
        }
        if (((mx_atoi(c2) == mx_atoi(c3)) && (mx_atoi(c3) == mx_atoi(c4)))
            ||((mx_atoi(c2) == mx_atoi(c4)) && (mx_atoi(c4) == mx_atoi(c5)))) 
        {
            return 3;
        }
        if (((mx_atoi(c3) == mx_atoi(c4)) && (mx_atoi(c4) == mx_atoi(c5))))  
	{
            return 3;
        }
    }
    if (((c1[0] == c2[0]) && (c2[0]== c3[0])) 
        || ((c1[0] == c3[0]) && (c3[0]== c4[0])) 
        || ((c1[0] == c4[0]) && (c2[0]== c5[0]))) 
    {
        return 3;
    }
    if (((c2[0] == c3[0]) && (c3[0]== c4[0]))
        || ((c2[0] == c4[0]) && (c4[0]== c5[0]))) 
    {
        return 3;
    }
    if ((c3[0] == c4[0]) && (c4[0]== c5[0]) ) 
    {
        return 3;
    }
    return a;
}



