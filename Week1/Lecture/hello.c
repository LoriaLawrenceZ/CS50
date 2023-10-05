//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    //-----===Asking User's Name===-----//
    char name[50]; //"String" to store the user's name

    printf("Hello, world!\nWhat's yout name? "); //Asking the user's name
    //Getting and saving the text
    fgets(name, sizeof(name), stdin); //Function "fgets()" need these 3 parameters to work

    printf("Hello, %s", name); //Printing user's name

    //-----===Conditionals===-----//
    //Example of how an IF-ELSE statement would work:
    int x = 1; //Declaring X
    int y = 2; //Declaring Y
    if (x < y) { //Conditional to check if X is less than Y
        printf("X is less than Y\n"); //If the condition prove to be true, than this line happen
    }
    else if (x == y) { //Conditional to check if X has the same value as Y
        printf("X is equal to Y\n"); //If the condition prove to be true, than this line happen
    }
    else {
        printf("X is greater than Y\n"); //If none of the conditions are proven to be true, than this line happens
    }
}