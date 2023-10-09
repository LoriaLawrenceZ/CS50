//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie
#include <stdlib.h>

int main(void) {
    //Declaring variables
    //Need to be wary about the type of data used
    //For really big numbers (like billions) use long int or long long int
    long long int x;
    long long int y;
    //Double have double the precision than that of a float
    double z;

    //Getting X value from the user
    printf("X: ");
    scanf("%lld", &x);
    //Getting Y value from the user
    printf("Y: ");
    scanf("%lld", &y);

    //Converting x and y to float/double, so that the division can occur correctly (without the parse, there's no room for any numbers after the decimal point)
    //Double have double the precision than that of a float
    z = (double) x / (double) y;

    //Making the calculator
    // ' %c ' stands for 
    // ' %f ' stands for float - to specify how many numbers want to see (after the decimal point) is to specify it between the '%' and the 'f' (' %.20f ' for example)
    // ' %i ' stands for 
    // ' %li ' stands for long int
    // ' %lli ' stands for long long int 
    // ' %s ' stands for 
    printf("Sum: %lli\n", (x + y));
    printf("Division: %.10f\n", z);
}