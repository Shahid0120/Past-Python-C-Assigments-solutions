// middle3.c
// by Shahid Hussain

#include <stdio.h>

int main(void) {
    int numberOne;
    int numberTwo;
    int numberThree; 
    
    printf("Enter integer: ");
    scanf("%d",&numberOne);
    printf("Enter integer: ");
    scanf("%d",&numberTwo);
    printf("Enter integer: ");
    scanf("%d",&numberThree);
    
    printf("Middle: ");
    if (numberOne >= numberTwo && numberOne <= numberThree) {
        printf("%d\n",numberOne);
    } else if (numberOne >= numberThree && numberOne <= numberTwo) {
        printf("%d\n",numberOne);
    } else if ( numberTwo >= numberOne && numberTwo <= numberThree) {
        printf("%d\n", numberTwo);   
    } else if ( numberTwo <= numberOne && numberTwo >= numberThree) {
        printf("%d\n", numberTwo);
    } else if ( numberThree >= numberOne && numberThree <= numberTwo ) {
        printf("%d\n", numberThree);    
    } else if ( numberThree <= numberOne && numberThree >= numberTwo) {
        printf("%d\n", numberThree);
    } else if ( numberOne == numberTwo && numberOne == numberThree ) {
        printf("%d\n", numberOne);
    
    
    }

    return 0;
}