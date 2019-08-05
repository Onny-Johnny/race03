#include "../inc/minilibmx.h"

int main(int argc,char **argv) {
    if (argc == 6) {
        char *card1 = mx_strnew(mx_strlen(argv[1]));
        char *card2 = mx_strnew(mx_strlen(argv[2]));
        char *card3 = mx_strnew(mx_strlen(argv[3]));
        char *card4 = mx_strnew(mx_strlen(argv[4]));
        char *card5 = mx_strnew(mx_strlen(argv[5]));
        
	int r = 0;
        int save = 0;
        mx_strcpy(card1, argv[1]);
	mx_strcpy(card2, argv[2]);
        mx_strcpy(card3, argv[3]);
        mx_strcpy(card4, argv[4]);
        mx_strcpy(card5, argv[5]);
       
        if ((mx_iscard(card1)) && (mx_iscard(card2)) 
            && (mx_iscard(card3)) && (mx_iscard(card4)) 
            && (mx_iscard(card5)))
        {


        if (no_dublicate(card1, card2, card3, card4, card5) == 1) {
            r = two(card1, card2, card3, card4, card5);
            save = r;
            r = two_two(card1, card2, card3, card4, card5, save);
            save = r;
            r = three(card1, card2, card3, card4, card5, save);
            save = r;
            r = straight(card1, card2, card3, card4, card5, save);
            save = r;
            r = flush(card1, card2, card3, card4, card5, save);
            switch(r) {
                case 0:
                    mx_printstr("No pair\n");
                    break;
                case 1:
                    mx_printstr("One pair\n");
                    break;
                case 2:
                    mx_printstr("Two pair\n");
                    break;
                case 3:
                    mx_printstr("Three of a kind\n");
                    break;
                case 4:
                    mx_printstr("Straight\n");
                    break;
                case 5:
                    mx_printstr("Flush\n");
                    break;
                case 6:
                    mx_printstr("Full house\n");
                    break;
                case 7:
                    mx_printstr("Four of a kind\n");
                    break;
                case 8:
                    mx_printstr("Straight flush\n");
                    break;
                case 9:
                    mx_printstr("Royal flush\n");
                    break;
            }
	} else {
            exit(0);
        }
        }else {
            exit(0);
        }
    free(card1);
    free(card2);
    free(card3);
    free(card4);
    free(card5);
    } else
        mx_printerr("usage: ./race03 [card1] [card2] [card3] [card4] [card5]");
   
    return 0;
}
