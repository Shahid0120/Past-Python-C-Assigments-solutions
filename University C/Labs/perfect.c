// by Shahid Husssain 
#include <stdio.h> 


int main(void) { 
    int numberOne;
    int totalNumb = 0 ;
    //input
    printf("Enter number: ");
    scanf("%d", &numberOne);
    // factors
    printf("The factors of %d are: \n", numberOne);
    int i = 1; 
    // looop for printing factors
    while (i <= numberOne) {
        if ( numberOne % i == 0) {
            printf("%d\n", i);
            totalNumb += i;
            i++; 
        } else {
            i = i + 1;
        }
    }
    // add all the factors of 6
    printf("Sum of factors = %d\n", totalNumb); 
    // inllustratve weather perfect nuber or not
    if ((totalNumb - numberOne) == numberOne) {
        printf("%d is a perfect number\n", numberOne);
        // perfect number
    } else {
        printf("%d is not a perfect number\n", numberOne);
        /// not a perfect number 
    }
}