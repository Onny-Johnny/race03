#include "../inc/minilibmx.h"

bool mx_iscard(char *c) {
    if (mx_strlen(c) > 2) {
        if ((rank(c) == 0) && (mast(c) == 0) && (mx_atoi(c) != 10)) {
            mx_printerr("invalid card: ");
            mx_printerr(c);
            return false;
        }
        if ((rank(c) == 0)) {
            mx_printerr("invalid rank: ");
            mx_printint(mx_atoi(c));
            return false;
        }
        if ((rank(c) == 0) && (mx_strlen(c) > 2)) {
            mx_printerr("invalid card: ");
            mx_printerr(c); 
            return false;
        }
	if ((mx_strlen(c) > 3)) {
            mx_printerr("invalid card: ");
            mx_printerr(c); 
            return false;
        }
    }
    if (mx_strlen(c) == 2) {
        if ((rank(c) == 0 || mx_ishight_rank(c) == 0) && (mast(c) == 0)) {
            mx_printerr("invalid card: ");
            mx_printerr(c);
            return false;
        }
        if(mx_isupper(c[0])) {
            if (mx_ishight_rank(c) == 0) {
                mx_printerr("invalid rank: ");
                pr_r(c);
                return false;
            }
        }
        if(is_dch(c[0])) {
            if ((rank(c) == 0)) {
                mx_printerr("invalid rank: ");
                mx_printint(mx_atoi(c));
                return false;
            }
        }
        if ((mast(c) == 0)) {
            mx_printerr("Invalid card suit: ");
            print_mast(c);
            return false;
        }
    }
    if (mx_strlen(c) < 2) {
        mx_printerr("invalid card: ");
        mx_printerr(c);
        return false;
    }
    return true;
}
