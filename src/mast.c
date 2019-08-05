#include "../inc/minilibmx.h"

bool mast(char *c) {
    if(mx_atoi(c) >= 10) {
        if (c[mx_strlen(c) - 1] == 'H' || 
            c[mx_strlen(c) - 1] == 'S' || 
            c[mx_strlen(c) - 1] == 'C' || 
            c[mx_strlen(c) - 1] == 'D') 
        {
            return 1;
        }
    }else if ((mx_strlen(c) == 2) && (c[1] == 'H' || 
              c[1] == 'S' || c[1] == 'C' || 
              c[1] == 'D')) 
        {
            return 1;
   }else if(mx_atoi(c) < 0) {
        if (c[mx_strlen(c) - 1] == 'H' || 
            c[mx_strlen(c) - 1] == 'S' || 
            c[mx_strlen(c) - 1] == 'C' || 
            c[mx_strlen(c) - 1] == 'D') 
        {
            return 1;
        }
    }
    return 0; 
}
