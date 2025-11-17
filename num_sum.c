#include <stdio.h>

/*
 * Filename: num_sum.c
 * Description: checking if the sum of the edges in an input is the same as the sum of the numbers between them
 * Author: Niv Karasenty
 */

int main () {
    int edges, between = 0, next, current;
    printf ("Enter some number of numbers you want to check: \n");

    // Scanning the first edge and the second number, it might be an edge so we don't add it to the between sum yet
    scanf ("%d", &edges);
    scanf ("%d", &current);
    // Checking for the last value, when scanf doesn't get another value we know that next is at the last value and we add it to the edges sum
    // When there is a next value we add the current to between and set the next to current
    while (scanf("%d", &next) == 1) {
        between += current;
        current = next;
    }
    // Adding the last value to the edges
    edges += next;

    (edges == between) ? printf("The sum is equal") : printf("The sum is NOT equal");
    return 0;
}