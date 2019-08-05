#include "../inc/minilibmx.h"

int flush(char *c1, char *c2, char *c3, char *c4, char *c5, int a) {
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c3) == 3 && mx_strlen(c4) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[2],c2[2],c3[2],c4[2],c5[2]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c3) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[2],c2[2],c3[2],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c3) == 3 && mx_strlen(c4) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[2],c3[2],c4[2],c5[2]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c4) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[2],c2[2],c3[1],c4[2],c5[2]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c3) == 3)
        if(is_flush(c1[2],c2[2],c3[2],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[2],c2[2],c3[1],c4[2],c5[1]))
            return 5; 
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[2],c2[2],c3[1],c4[1],c5[2]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c3) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[1],c2[2],c3[2],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c3) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[1],c3[2],c4[1],c5[2]))
            return 5;
    if(mx_strlen(c3) == 3 && mx_strlen(c4) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[1],c3[2],c4[2],c5[2]))
            return 5;
    if(mx_strlen(c4) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[1],c3[1],c4[2],c5[2]))
            return 5;
    if(mx_strlen(c3) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[1],c3[2],c4[1],c5[2]))
            return 5;
    if(mx_strlen(c3) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[1],c2[1],c3[2],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[2],c3[1],c4[1],c5[2]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[1],c2[2],c3[1],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c2) == 3 && mx_strlen(c3) == 3)
        if(is_flush(c1[1],c2[2],c3[2],c4[1],c5[1]))
            return 5; 
    if(mx_strlen(c1) == 3 && mx_strlen(c5) == 3)
        if(is_flush(c1[2],c2[1],c3[1],c4[1],c5[2]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c4) == 3)
        if(is_flush(c1[2],c2[1],c3[1],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c3) == 3)
        if(is_flush(c1[2],c2[1],c3[2],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c1) == 3 && mx_strlen(c2) == 3)
        if(is_flush(c1[2],c2[2],c3[1],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c1) == 3)
        if(is_flush(c1[2],c2[1],c3[1],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c2) == 3)
        if(is_flush(c1[1],c2[2],c3[1],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c3) == 3)
        if(is_flush(c1[1],c2[1],c3[2],c4[1],c5[1]))
            return 5;
    if(mx_strlen(c4) == 3)
        if(is_flush(c1[1],c2[1],c3[1],c4[2],c5[1]))
            return 5;
    if(mx_strlen(c5) == 3)
        if(is_flush(c1[1],c2[1],c3[1],c4[1],c5[2]))
            return 5;
    if(is_flush(c1[1],c2[1],c3[1],c4[1],c5[1]))
        return 5;

    return a;
}

