#include "../inc/minilibmx.h"

void print_mast(const char *s) {
    s++;

    for(; *s != '\0';) {
        write(2, s, 1);
        s++;
    }
}
