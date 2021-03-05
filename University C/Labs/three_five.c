// three five lab 03 
// by Shahid Hussain
// 4th October 2019


#include <stdio.h> 

int main(void) {
    int numberOne;
    int counterTwo = 0;
    int counter = 0;
    
    //Allows to give an integer
    printf("Enter number: ");
    scanf("%d", &numberOne);
    
    // Two counters
    counter = counter + 3;
    counterTwo = counterTwo + 5; 
    
    // loop
    while (counter <= numberOne && counterTwo <= numberOne) {
        if (counter < counterTwo) {
            printf("%d\n", counter);
            counter = counter + 3;
        } else if (counter == counterTwo) {
            counter = counter + 3;
        } else {
            printf("%d\n", counterTwo);
            counterTwo = counterTwo + 5;
        }
    }

    return 0;
}