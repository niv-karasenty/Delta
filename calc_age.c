/*
 * Filename: calc_age.c
 * Description: calculating the age of user in days months and years
 * Author: Niv Karasenty
 */
#include <stdio.h>
const int DAYS_IN_MONTH = 30;
const int DAYS_IN_YEAR = 365;
int main() {
    int t_days, t_months, t_years; // declaring variables for today's date
    int b_days, b_months, b_years; // declaring variables for birthday
    int days_age;
    double months_age, years_age;
    printf("Enter current date: \n");
    scanf("%d/%d/%d", &t_days, &t_months, &t_years); // Scanning input in the format dd/mm/yyyy
    printf("Enter your birthday: \n");
    scanf("%d/%d/%d", &b_days, &b_months, &b_years);
    days_age = t_days - b_days + DAYS_IN_MONTH * (t_months - b_months) + DAYS_IN_YEAR * (t_years - b_years);
    printf("Your age in days is: %d\n", days_age);
    months_age = (double)(days_age) / DAYS_IN_MONTH;
    printf("Your age in months is: %f\n", months_age);
    years_age = (double)(days_age) / DAYS_IN_YEAR;
    printf("Your age in years is: %f\n", years_age);
    return 0;
}