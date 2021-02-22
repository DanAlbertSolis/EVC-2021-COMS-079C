/**
* Student: Dan Albert Solis
* Date: 2/19/2021
* Program description: This program repeatedly asks user to enter up to
 * 20 values (or until 0 is entered) and will print out the average
 * weight along with the values closest to the average.
*/

#include <stdio.h>
#include <math.h>

int main() {

    int count = 0;
    double input = 1, totalWeight = 0;
    double weights[20] ={0}; //array of max length 20 init to 0

    while (count < 20 && input != 0){ //loop less than 20, input not 0
        printf("Enter a weight in kg, or 0 to quit:");
        scanf("%lf", &input);

        if (input > 0){ //eligible input greater than 0 added onto arr
            weights[count] = input;
            count++; //weights count
            totalWeight += input; // total weight

        }
        else if (input < 0){
            printf("Ignoring negative value. \n"); //less than 0 ignored
        }

    }

    double average = totalWeight/count; //average weight
    printf("Number of entries: %i\n", count);
    printf("Average weight: %.3lf kg\n", average);

    //init minDeviation of first arr value - average
    double minDeviation = fabs(weights[0] - average);

    //loops through array and finds smallest deviation
    for(int i = 0; i < count; i++){
        if (fabs(weights[i] - average) < minDeviation){
            minDeviation = fabs(weights[i] - average);
        }
    }

    int n_closest = 0; //closest arr count
    double closest[20]; //closest arr declaration

    //loops through arr to find all values with the defined smallest deviation
    for (int i = 0; i < count; i++){
        if (fabs(weights[i] - average) == minDeviation){
            closest[n_closest++] = weights[i];
        }
    }

    printf("Number of items closest to average: %i\n", n_closest);
    printf("The item(s) - weight in kg:\n");

    for (int i = 0; i < n_closest; i++){
        printf("%.3lf\n", closest[i]);
    }


    return 0;
}
