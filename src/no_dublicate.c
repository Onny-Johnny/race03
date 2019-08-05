#include "../inc/minilibmx.h"

bool no_dublicate(char *c1, char *c2, char *c3, char *c4, char *c5) {
    if ((mx_strcmp(c1, c2) == 0) || (mx_strcmp(c1, c3) == 0)
        || (mx_strcmp(c1, c4) == 0) || (mx_strcmp(c1, c5) == 0)) 
    {
        mx_printerr("Duplicate cards: ");
        mx_printerr(c1);
        return 0;
    }
    if ((mx_strcmp(c2, c3) == 0) || (mx_strcmp(c2, c4) == 0) 
        || (mx_strcmp(c2, c5) == 0)) 
    {
        mx_printerr("Duplicate cards: ");
        mx_printerr(c2);
        return 0;
    }
    if ((mx_strcmp(c3, c4) == 0) || (mx_strcmp(c3, c5) == 0)) 
    {
        mx_printerr("Duplicate cards: ");
        mx_printerr(c3);
        return 0;
    }
    if (mx_strcmp(c4, c5) == 0) {
        mx_printerr("Duplicate cards: ");
        mx_printerr(c4);
        return 0;
    }
    return 1;
}
