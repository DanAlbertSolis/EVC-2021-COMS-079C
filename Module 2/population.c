/**
* Student: Dan Albert Solis
* Date: 2/11/2021
* Program description: Prints an estimated population from 2011 to 2020 via a for loop doing int calculations of defined
 * variables.
*/
#include <stdio.h>

int main() {
    int year = 2010, population = 308401808,secondsTillBirth = 9,secondsTillDeath = 10,secondsTillMigrant = 47;
    const int secondsPerYear = 31536000; // final or "const" variable, seconds dont change year to year.
    printf("Year  Estimated Population\n");
    for (int i = 0; i <= 10; i++){
        printf("%i  %i\n", year + i, population);  // prints year and adds i, could also be replaced with year++
        population += (secondsPerYear/secondsTillBirth) + (secondsPerYear/
                                                           secondsTillMigrant) -(secondsPerYear/secondsTillDeath);
                                                           //int calculation


    }

    return 0;
}


