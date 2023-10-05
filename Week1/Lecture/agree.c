//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    char answer; //It need to use " ' " (single quote) for char

    //Asking if the user agrees
    printf("Do you agree?");
    answer = getchar(); //stdio has its own function to get characters

    //Making an if-else statement
    if (answer == 'Y') {
        printf("Agreed.\n");
    }
    else if (answer == 'N'){
        printf("not agreed.\n");
    }
    
}