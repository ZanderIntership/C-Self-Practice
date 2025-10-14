#include <cs50.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Plaidrome(string word);

int main(void)
{
    printf("\nIs it a palidrome? \n");

    string IntialString = get_string("Enter a word : ");

    for (int j = 0; j < strlen(IntialString); j++)
    {
        IntialString[j] = tolower(IntialString[j]);
    }

    Plaidrome(IntialString);
}

void Plaidrome(string word)
{

    int TotalLengthOfString = strlen(word);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] != word[TotalLengthOfString - 1])
        {
            printf("\nThis word is not a Palidrome\n");
            exit(0);
        }

        TotalLengthOfString--;
    }
    printf("This word is a Palidrome\n");
}
