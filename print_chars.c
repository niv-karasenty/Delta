#include <stdio.h>
/*
 * Filename: print_chars.c
 * Description: printing stars according to user's input
 * Author: Niv Karasenty
 */


int main () {
    int input;
    printf ("Enter your input: \n");

    // We will use the fact that scanf returns 1 if the item was read successfully
    if (scanf("%d", &input) != 1) {
        printf ("Bad input!\n");
        return 1;
    }


    // Checking to which law in part one the input matches and printing accordingly
    if (input % 2 == 0) {
        for (int i = 0; i < input; ++i) {
            for (int j = 0; j < input; ++j) {
                printf ("*");
            }
            printf ("\n");
        }
    }
    else if (input % 3 == 0) {
        for (int i = 0; i < input; ++i) {
            for (int j = 0; j < input; ++j) {
                printf ("^");
            }
            printf ("\n");
        }
    }
    else if (input % 5 == 0) {
        for (int i = 0; i < input; ++i) {
            for (int j = 0; j < input; ++j) {
                printf("%%");
            }
            printf ("\n");
        }
    }
    else {
        for (int i = 0; i < input; ++i) {
            for (int j = 0; j < input; ++j) {
                printf ("@");
            }
            printf ("\n");
        }
    }
    return 0;
}