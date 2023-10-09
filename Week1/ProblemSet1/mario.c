//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie
#include <stdlib.h>

// """Importing""" the functions.
//If they're not declared, its the same as if it doesn't exist. But to declare them and let the main function be at the top. Just to that
int get_size(void);
void print_grid(int size);

int main(void){
    //Declaring an constant
    const int n = 3; //Immutable

    //Calling functions that were created in the code (own method)
    //Function to get the grid size from the user
    int size = get_size();

    //Function to print the grid based in the user's input
    print_grid(size);
}

//Creating own functions (method)
//Function that'll return an positive Integer
int get_size(void){ //Doenst have any "inputs" (parameters) but it has an output (value returned - int in this case)
    int size;

    do{
        printf("Height: ");
        scanf("%d", &size);
        //If user dont give an positive integer, keep repeating
    } while (size < 1);

    return size;//returning value
}

//Function that'll print the grid of stairs
void print_grid(int size){ //doens't return anything (will just print) so it'll use void. It'll have an parameter, the size parameter
    //Print grid of bricks
    for (int i = 0; i < size; i++) {
        //Left side
        for (int j = 0; j < size; j++) {
            if (j >= size - i - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }

        //Space
        printf("  ");

        //Right side
        for (int j = 0; j < size; j++){
            if (i >= j){
                printf("#");
            }
        }
        printf("\n");
    }
}