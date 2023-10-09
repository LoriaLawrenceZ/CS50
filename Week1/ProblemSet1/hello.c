//---Importing Libraries---//
#include <stdio.h> //Standart IO librarie
#include <stdlib.h>

int main(void)
{
    char name[50];
    printf("What's your name? ");
    scanf("%s", name);

    printf("hello, %s\n", name);
}