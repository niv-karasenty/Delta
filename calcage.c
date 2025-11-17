/*
 * Filename: calcage.c
 * Description: calculating the age of user in days months and years
 * Author: Niv Karasenty
 */
#include <stdio.h>

int main() {
    int tdays, tmonths, tyears; // declaring variables for today's date
    int bdays, bmonths, byears; // declaring variables for birthday
    int days_age;
    double months_age, years_age;
    printf("Enter current date: \n");
    scanf("%d/%d/%d", &tdays, &tmonths, &tyears); // Scanning input in the format dd/mm/yyyy
    printf("Enter your birthday: \n");
    scanf("%d/%d/%d", &bdays, &bmonths, &byears);
    days_age = tdays - bdays + 30 * (tmonths - bmonths) + 365 * (tyears - byears);
    printf("Your age in days is: %d\n", days_age);
    months_age = (double)(days_age) / 30;
    printf("Your age in months is: %f\n", months_age);
    years_age = (double)(days_age) / 365;
    printf("Your age in years is: %f\n", years_age);
    return 0;
}