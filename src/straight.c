#include "../inc/minilibmx.h"

int straight(char *c1, char *c2, char *c3, char *c4, char *c5, int a) {
    int ic1 = 0;
    int ic2 = 0;
    int ic3 = 0;
    int ic4 = 0;
    int ic5 = 0;
    int res = 0;

    if(mx_ishight_rank(c1)) {
        ic1 = high_convert(c1);
    }
    if(mx_ishight_rank(c2)) {
        ic2 = high_convert(c2);
    }
    if(mx_ishight_rank(c3)) {
        ic3 = high_convert(c3);
    }
    if(mx_ishight_rank(c4)) {
        ic4 = high_convert(c4);
    }
    if(mx_ishight_rank(c5)) {
        ic5 = high_convert(c5);
    }
    if(ic1 > 0 && ic2 > 0 && ic3 > 0 && ic4 > 0 && ic5 > 0) {
        if(is_straight(ic1, ic2, ic3, ic4, ic5))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0 && ic3 > 0 && ic4 > 0) {
        if(is_straight(ic1, ic2, ic3, ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0 && ic4 > 0 && ic5 > 0) {
        if(is_straight(ic1, ic2, mx_atoi(c3), ic4, ic5))
            return 4;
    }
    if(ic2 > 0 && ic3 > 0 && ic4 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), ic2, ic3, ic4, ic5))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0 && ic3 > 0) {
        if(is_straight(ic1, ic2, ic3, mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0 && ic4 > 0) {
        if(is_straight(ic1, ic2, mx_atoi(c3), ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0 && ic5 > 0) {
        if(is_straight(ic1, ic2, mx_atoi(c3), mx_atoi(c4), ic5))
            return 4;
    }
    if(ic2 > 0 && ic3 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), ic2, ic3, mx_atoi(c4), ic5))
            return 4;
    }
    if(ic2 > 0 && ic3 > 0 && ic4 > 0) {
        if(is_straight(mx_atoi(c1), ic2, ic3, ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic3 > 0 && ic4 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), ic3, ic4, ic5))
            return 4;
    }
    if(ic1 > 0 && ic2 > 0) {
        if(is_straight(ic1, ic2, mx_atoi(c3), mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic3 > 0) {
        if(is_straight(ic1, mx_atoi(c2), ic3, mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic4 > 0) {
        if(is_straight(ic1, mx_atoi(c2), mx_atoi(c3), ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic1 > 0 && ic5 > 0) {
        if(is_straight(ic1, mx_atoi(c2), mx_atoi(c3), mx_atoi(c4), ic5))
            return 4;
    }
    if(ic2 > 0 && ic3 > 0) {
        if(is_straight(mx_atoi(c1), ic2, ic3, mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic2 > 0 && ic4 > 0) {
        if(is_straight(mx_atoi(c1), ic2, mx_atoi(c3), ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic2 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), ic2, mx_atoi(c3), mx_atoi(c4), ic5))
            return 4;
    }
    if(ic3 > 0 && ic4 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), ic3, ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic3 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), ic3, mx_atoi(c4), ic5))
            return 4;
    }
    if(ic4 > 0 && ic5 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), mx_atoi(c3), ic4, ic5))
            return 4;
    }
    if(ic1 > 0) {
        if(is_straight(ic1, mx_atoi(c2), mx_atoi(c3), mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic2 > 0) {
        if(is_straight(mx_atoi(c1), ic2, mx_atoi(c3), mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic3 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), ic3, mx_atoi(c4), mx_atoi(c5)))
            return 4;
    }
    if(ic4 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), mx_atoi(c3), ic4, mx_atoi(c5)))
            return 4;
    }
    if(ic5 > 0) {
        if(is_straight(mx_atoi(c1), mx_atoi(c2), mx_atoi(c3), mx_atoi(c4),ic5))
            return 4;
    }
    if(is_straight(mx_atoi(c1), mx_atoi(c2), mx_atoi(c3), mx_atoi(c4),mx_atoi(c5))) 
        return 4;
    return a;
}

