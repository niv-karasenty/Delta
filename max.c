#include <stdio.h>

int main() {
    int x = 79;
    int y = 78;
    int z = y * (y > x) + x * (x > y) + x * (x == y);
    // We multiply the bigger value by one and the smaller one by 0, that is how we get the bigger value every time
    // I have now included the option that x and y are equal, in that case both the x>y and x<y will be 0 and we will add either of the values for the solution to be the value they are equal to
    printf("the value of z is %d \n", z);
}