// multiple.c program ofr weekly test 3
// By Shahid Hussain
// 4th Octomber 2019

#include <stdio.h> 

int main(void) {
    int numberOne; 
    int numberTwo;
    int multi;
     
    // scanfs the two integers 
    scanf("%d ", &numberOne); 
    scanf("%d", &numberTwo);

    
    
    // then differentiates betwee negative and postitive
    if (numberOne > 0 && numberTwo > 0) {
        //the multiplication
        printf("%d\n", numberOne * numberTwo);
    } else if (numberOne == 0 || numberTwo == 0) {
        //shows for one zero
        printf("zero\n");
    } else if ((numberOne < 0 && numberTwo > 0) ||( numberOne > 0 && numberTwo < 0)) {
        //one negative and one postitive
        multi = numberOne * numberTwo;
        printf("%d\n", multi * -1);
    } else if (numberOne == 0 && numberTwo == 0) {
        //both zero
        printf("zero\n");
    } else if ( numberOne < 0 && numberTwo < 0) {
        // both negative
        multi = numberOne * numberTwo;
        printf("%d\n", multi);  
    }
    return 0;
}