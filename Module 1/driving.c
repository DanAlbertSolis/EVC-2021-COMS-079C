/**
 * Student: Dan Albert Solis
 * Date: 2/5/2021
 * Program description: This program calculates and prints out the amount of miles driven per day, cost of gallon of gas,
 * miles per gallon, parking fees, daily toll price, and calculates the daily driving cost formatted to the second,
 * decimal point.
 */
#include <stdio.h>
void prt(){
    int a = 3;
    int b = 5;
    int c = 11;
    int d = a - 2 * b + c;
    printf(">%.f",d);
}


int main() {
    int milesDay = 30;
    double priceGallon = 3.19;
    double milesPerGallon = 18;
    double parkingFees = 0;
    double dailyTollPrice= 0;
    prt();

    printf("Miles driven per day: %i\n", milesDay);
    printf("Cost per gallon of gasoline: $%.2f\n", priceGallon);
    printf("Miles per gallon: %.2f\n", milesPerGallon);
    printf("Parking fees: $%.2f\n", parkingFees);
    printf("Daily toll price: $%.2f\n", dailyTollPrice);
    printf("Driving cost per day: $%.2f\n", ((milesDay/milesPerGallon) * priceGallon));

    return 0;
}

