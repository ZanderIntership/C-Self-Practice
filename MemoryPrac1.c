#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>


int main(void){
    int H = 10;
    int *i = malloc(sizeof(int));


    if (i == NULL){
        printf("Memory allocation has failed");
        return 1;
    }
    *i = H;

    printf("%p\n",i);
    free(i);
    return 0;
}
