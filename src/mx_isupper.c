#include "../inc/minilibmx.h"

bool mx_isupper(int c) {
    char ucase = 'A';

    for (int i = 1; i <= 26; i++) {
        if (c == ucase) {
            return true;
	}
        ucase++;
    }
   return false; 
}
