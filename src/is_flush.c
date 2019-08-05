#include "../inc/minilibmx.h"

bool is_flush(char a, char b, char c, char d, char e) {
    if((a == b) && (b == c) && (c == d) && (d == e))    
        return true;
    return false;
}


