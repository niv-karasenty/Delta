/*
* Filename: max.c
 * Description: returning the bigger number without using if, we use the fact the true in c is 1 and false is 0,
 * so for each option we multiply the answer by 0 if it's false and 1 if true
 * Author: Niv Karasenty
 */

#include <stdio.h>

int main() {
    int x = 79;
    int y = 38;
    int z = x + (y > x)*(y - x);
    // We multiply the bigger value by one and the smaller one by 0, that is how we get the bigger value every time
    // To solve the problem where x = y, we will set the value to be x, if y is bigger than x we add the difference between the 2 values and thus get to y,
    // otherwise, we leave it as x
    printf("the value of z is %d \n", z);
    return 0;
}