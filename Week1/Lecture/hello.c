//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    char name[50]; //"String" to store the user's name

    printf("Hello, world!\nWhat's yout name? "); //Asking the user's name
    //Getting and saving the text
    fgets(name, sizeof(name), stdin); //Function "fgets()" need these 3 parameters to work

    printf("Hello, %s", name); //Printing user's name
}