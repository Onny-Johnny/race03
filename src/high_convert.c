#include "../inc/minilibmx.h"

int high_convert(char *c) {    
    if(c[0] == 'J')
        return 11;     
    if(c[0] == 'Q')
        return 12;
    if(c[0] == 'K')
        return 13;  
    if(c[0] == 'A')
        return 14; 
    return 0; 
}
