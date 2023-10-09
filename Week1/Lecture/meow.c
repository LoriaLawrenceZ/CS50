//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    //Declaring a variable
    int counter = 0;
    //Adding 1 to the variable
    counter = counter + 1; //"Hard" way
    counter += 1; //"Sytax sugar" way
    counter++; //Abbreviate way
    //Syntax sugar:
    // -= number; (it'll add 'number' to variable)
    // -= number; (it'll remove 'number' from variable)
    // *= number; (it'll multiply variable by 'number')
    // /= number; (it1ll divide variable by 'number)
    //
    //Abbreviate way:
    // ++ (it'll add 1 to the variable)
    // -- (it'll remove 1 from the variable)


    //Printing "meow" 3 times
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");

    //-----===LOOPS===-----//
    //---=While Loop=---//
    //Loop to iterate over x times
    while (counter < 3){ //While the condition is true, then
        //Do the code here
        printf("meow\n");
        counter++; //counter that'll count how many times it iterated (and it'll be checked in while)
    }

    //---=For Loop=---//
    //Loop to iterate over x times
    for (int i = 0; i < 3; i++){ //While the condition is true (condition is the middle one)
        //Do the code here
        printf("meow\n");
    }
}