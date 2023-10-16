/*
Conversions. This set of problems involves converting a value in one unit to a value in another unit. Each program should prompt the user for a value in the specified units and then
print the converted value, along with the new units.
21. Write a program to convert miles to kilometers.
22. Write a program to convert meters to miles.
23. Write a program to convert pounds to kilograms.
24. Write a program to convert newtons to pounds.
25. Write a program that converts degrees Fahrenheit to degrees Rankin
26. Write a program that converts degrees Celsius to degrees Rankin
27. Write a program that converts degrees Kelvin to degrees Fahrenheit
*/
//21
#include <stdio.h>

int main() {
    double miles, kilometers;

    // Input the distance in miles
    printf("Enter distance in miles: ");
    scanf("%lf", &miles);

    // Convert miles to kilometers
    kilometers = miles * 1.60934;

    // Display the result
    printf("%.2lf miles is equal to %.2lf kilometers.\n", miles, kilometers);

    return 0;
}
//22
#include <stdio.h>
int main(){
    double meters, miles;

    //Input the distance
    printf("Enter distance in meters: ");
    scanf("%lf", &meters);

    miles = meters * 0.000621371;

    printf("%.5f meters is equal to %.5f miles. \n", meters, miles);

    return 0;

}//end of main

//23
#include <stdio.h>

int main() {
    double pounds, kilograms;

    // Input the weight in pounds
    printf("Enter weight in pounds: ");
    scanf("%lf", &pounds);

    // Convert pounds to kilograms
    kilograms = pounds * 0.453592;

    // Display the result
    printf("%.2lf pounds is equal to %.2lf kilograms.\n", pounds, kilograms);

    return 0;
}
//24






