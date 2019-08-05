#include "../inc/minilibmx.h"

bool is_straight(int a, int b, int c, int d, int e) {
    int sum = a + b + c + d + e;

    if(sum == 20)
        return true;
    if(sum == 25)
        return true;
    if(sum == 30)
        return true;
    if(sum == 35)
        return true;
    if(sum == 40)
        return true;
    if(sum == 45)
        return true;
    if(sum == 50)
        return true;
    if(sum == 45)
        return true;
    if(sum == 28)
        return true;
    return false;
}
