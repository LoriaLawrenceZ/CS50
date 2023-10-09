//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    char answer; //It need to use  ' (single quote) for char

    //Asking if the user agrees
    printf("Do you agree?");
    answer = getchar(); //stdio has its own function to get characters

    //Making an if-else statement
    if (answer == 'Y' || answer == 'y') { //Using the logical operator OR (' || ')
        printf("Agreed.\n");
    }
    else if (answer == 'N' || answer == 'n'){ //Using the logical operator OR (' || ')
        printf("Not agreed.\n");
    }
    
}