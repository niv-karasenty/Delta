#include <stdio.h>
/*
* Filename: calc_price.c
 * Description: Calculating the dimensions of a package and the shipping fee those dimensions cost
 * Author: Niv Karasenty
 */
const double BASE_FEE = 5.5;
const double FEE_PER_KILO = 11;
const double FEE_PER_SQUARE_CENTIMETER = 0.03;
const double FEE_PER_SIZE_BY_WEIGHT = 0.01;
const double MM_TO_CM_SQUARED = 100;
const double G_TO_KG = 1000;

int main () {
    int length, width, weight_in_grams;
    double size, price, weight_in_kg;
    // Input from user
    printf("Enter the length of the package: \n");
    scanf("%d", &length);
    printf("Enter the width of the package: \n");
    scanf("%d", &width);
    printf("Enter the weight: \n");
    scanf("%d", &weight_in_grams);

    // Conversion and calculation
    size = (double)(length * width) / MM_TO_CM_SQUARED;
    weight_in_kg = (double)weight_in_grams / G_TO_KG;
    price = BASE_FEE + weight_in_kg * FEE_PER_KILO + size * FEE_PER_SQUARE_CENTIMETER + (size / weight_in_kg) * FEE_PER_SIZE_BY_WEIGHT;

    // Output
    printf("The size of the package is: %.2f \n", size);
    printf("The weight of the package in kg is : %.3f \n", weight_in_kg);
    printf("The price of the package is : %.2f \n", price);

    return 0;
}