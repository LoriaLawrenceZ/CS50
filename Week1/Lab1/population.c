//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie
#include <stdlib.h>

/*
-----===PROBLEM===-----
- n llamas
- Every year:
    - n/3 llamas are born
    - n/4 llamas pass away
- Ask Start Population and End Population and calculate how many years it'll pass fto go from Start Population to End Population
*/

int get_starting_population(void);
int get_ending_population(long int starting_population);

int main(void) {
    //Declaring variables
    long int starting_population = get_starting_population();
    long int ending_population = get_ending_population(starting_population);
    int years = 0;

    //Calculating how many years it would take for population to grow
    while (starting_population != ending_population){
        starting_population += ( (starting_population / 3) - (starting_population / 4) );
        years ++;
    }

    printf("It'll take %i years\n", years);    
}

int get_starting_population(void) {
    //It cannot be less than 9 (must be equal or higher)
    long int population;

    do{
        printf("Start size: ");
        scanf("%li", &population);
    } while (population < 9);

    //returning population
    return population;    
}

int get_ending_population(long int starting_population) {
    //It cannot be less than the starting population
    long int population;

    do{
        printf("End size: ");
        scanf("%li", &population);
    } while (population < starting_population);

    //returning population
    return population; 
}