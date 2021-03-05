// Reverse array.c
// by Shahid Hussain
// Wednesday 9th 2019

#include <stdio.h> 

#define NUMB 100
int main(void) {

    int i = 0;
    int score[NUMB] = {0};
    //input
    printf("Enter numbers forwards:\n");
    while (scanf("%d", &score[i]) == 1) {
        i++; 
    }   
    
    //output
    printf("Reversed:\n");
    i--;
    while (i >= 0) {
        printf("%d\n", score[i]);
        i--;
    }
    
    return 0;
}

/*
while (i >= 0) {
        if (score[i] == 0) {
            i--;
        } else {
        printf("%d\n", score[i]);
        i--;
        }
    }
    return 
*/

/*
   printf("Reversed:\n");
    while (i >= 0) {
        if (score[i] == 0) {
            i--;
            if ( 
            i--;
        } else {
        printf("%d\n", score[i]);
        i--;
        }
    }
    
    */