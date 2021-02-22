/**
* Student: Dan Albert Solis
* Date: 2/11/2021
* Program description: This program repeatedly asks users to enter the price of an item until they enter 0, at that point
 * the program will print and the number of items purchased, the subtotal of prices, sales tax charged of 7.5% and the
 * grand total.
*/
#include <stdio.h>

int main() {
    double input, subTotal,count, tax;
    while (input != 0){
        printf("Enter a price, or zero when finished: $");
        scanf("%lf", &input);
        printf("\n"); //necessary or else output becomes weird after 3rd line

        if (input < 0)
            printf("Negative price ignored\n");
        else if(input > 0){
            count++;
            subTotal += input;}


    }
    tax = subTotal * .075; //tax calculation
    printf("Number of items purchased: %.0lf\n", count);
    printf("Subtotal: $%.2lf\n",subTotal);
    printf("Sales tax 7.5%%: $%.2lf\n", tax);
    printf("Total: $%.2lf\n", (subTotal + tax));

    return 0;
}
