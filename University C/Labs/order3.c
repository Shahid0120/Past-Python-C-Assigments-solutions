#include <stdio.h> 

int main(void) {
    // for integer One
    int numberOne;
    
    // for integer two 
    int numberTwo;
    
    //for integer three
    int numberThree;
    
    // ALlows to eneter first integer
    printf("Enter integer: ");
    scanf("%d", &numberOne);
    
    //Allows to enter secdon integer
    printf("Enter integer: ");
    scanf("%d", &numberTwo);
    
    //Allows to enter third integer
    printf("Enter integer: ");
    scanf("%d", &numberThree);

    //Show all possible outcomes to arranging integers
    //shows  inorder of numberOne , numberTwo, numberThree
    if (numberOne <= numberTwo && numberOne <= numberThree && numberTwo <= numberThree) {
        printf("the integers in order are: %d %d %d\n", numberOne, numberTwo, numberThree);
        
    } else if (numberOne <= numberTwo && numberOne <= numberThree && numberThree <= numberTwo) {
        // inroder 1,3,2
        printf("the integers in order are: %d %d %d\n", numberOne, numberThree, numberTwo);
        
    } else if (numberTwo <= numberOne && numberTwo <= numberThree && numberOne <= numberThree) {
        // inorder 2,1,3
        printf("the integers in order are: %d %d %d\n", numberTwo, numberOne, numberThree);
        
    } else if (numberTwo <= numberOne && numberTwo <= numberThree && numberThree <= numberOne) {
        //inorder 2,3,1
        printf("the integers in order are: %d %d %d\n", numberTwo, numberThree, numberOne);
        
    } else if (numberThree <= numberOne && numberThree <= numberTwo && numberTwo <= numberOne) {
        //order 3,2,1
        printf("the integers in order are: %d %d %d\n", numberThree, numberTwo, numberOne);
        
    } else {
        // order 3,1,2 
        printf("the integers in order are: %d %d %d\n", numberThree, numberOne, numberTwo);
    } 
    return 0;      
}