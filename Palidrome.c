#include <cs50.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    printf("\nIs it a palidrome? \n");

    string IntialString = get_string("Enter a word : ");
    int TotalLengthOfString = strlen(IntialString);


    for (int i = 0; i < strlen(IntialString); i++){
        if (IntialString[i] != IntialString[TotalLengthOfString - 1]){
            printf("\nThis word is not a Palidrome\n");
            return 1;
        }

        TotalLengthOfString--;
    }
    printf("This word is a Palidrome\n");

    return 0;


}
