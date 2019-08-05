#include "../inc/minilibmx.h"

bool mx_ishight_rank(char *c) {    
    if ((mx_strlen(c) == 2) && 
        (c[0] == 'J' || c[0] == 'Q' ||
        c[0] == 'K' || c[0] == 'A')) 
    {
            return 1;
    }
    return 0; 
}
