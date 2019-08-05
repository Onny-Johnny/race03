#include "../inc/minilibmx.h"

char *mx_strnew(const int size) {
    char *sp = NULL;

    if (size >= 1) {        
        sp = (char*) malloc(size + 1);
        for (int i = 0; i < size + 1; i++)
            sp[i] = '\0';
    }
    return sp; 
}
