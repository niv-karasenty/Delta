/*
* Filename: max.c
 * Description: returning the bigger number without using if, we use the fact the true in c is 1 and false is 0,
 * so for each option we multiply the answer by 0 if it's false and 1 if true
 * Author: Niv Karasenty
 */

#include <stdio.h>

int main() {
    int x = 79;
    int y = 78;
    int z = y * (y > x) + x * (x > y) + x * (x == y);
    // We multiply the bigger value by one and the smaller one by 0, that is how we get the bigger value every time
    // I have now included the option that x and y are equal, in that case both the x>y and x<y will be 0 and we will add either of the values for the solution to be the value they are equal to
    printf("the value of z is %d \n", z);
    return 0;
}