//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main(void){
    char answer[50];

    printf("Hello, world!\nWhat's yout name? ");
    //Getting and saving the text
    fgets(answer, sizeof(answer), stdin); //Function "fgets()" need these 3 parameters to work

    printf("Hello, %s", answer);
}