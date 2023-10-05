//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie

int main()
{
    int x; //Declaring X
    int y; //Declaring Y

    //Asking for the user whats the value of X
    printf("What's X? "); 
    //Attributing the user's input into X
    scanf("%d", &x); // ' %d ' works for intergers only

    //Doing the same for Y
    printf("What's Y? ");
    scanf("%d", &y);

    //Making an if-else statement
    if (x < y) {
        printf("X is less than Y\n");
    }
    else if(x > y) {
        printf("X is greater than Y\n");
    }
    else {
        printf("X is equal to Y\n");
    }

}
