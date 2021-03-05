// count_up.c
// Shahid Hussain 

#include <stdio.h> 

int main(void) {
    int numberOne;
    int numberTwo;
    
    printf("Enter Lower: ");
    scanf("%d", &numberOne);

    printf("Enter Upper: ");
    scanf("%d", &numberTwo);

    numberOne++;
    while ( numberOne < numberTwo) {           
        printf("%d\n", numberOne);
        numberOne++;
    }
    

    
}