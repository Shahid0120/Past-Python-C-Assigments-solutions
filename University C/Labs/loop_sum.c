// loop_sum 
// by Shahid Hussain

#include <stdio.h> 

int main(void) {
    int amountOfNumbers;
    int numbertwo;

    
    printf("How many numbers: ");
    scanf("%d", &amountOfNumbers);
    
    int i = 0;
    int total = 0;
    while ( i < amountOfNumbers) {
    scanf("%d", &numbertwo);
    total += numbertwo;
    i++;
    }
    
    
    printf("The sum is: ");
    printf("%d\n", total);

}