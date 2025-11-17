#include <stdio.h>

int main() {
    int x = 79;
    int y = 22;
    int z = y * (y > x) + x * (x > y); // We multiply the bigger value by one and the smaller one by 0, that is how we get the bigger value every time
    printf("the value of z is %d \n", z);
}