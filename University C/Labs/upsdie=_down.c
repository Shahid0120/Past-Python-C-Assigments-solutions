// Upside down .c 
// By Shahid Hussain
// 4th october 2019

#include <stdio.h>

int main(void) {
    double numberOne;
    double numberTwo;
    double numberThree;
    
    // input the data
    printf("Please enter three numbers: ");
    scanf("%lf ", &numberOne);
    scanf("%lf ", &numberTwo);
    scanf("%lf", &numberThree);
    
    if (numberOne > numberTwo && numberTwo > numberThree) {
        //decreasing from 1 to 3
        printf("down\n");
    } else if (numberThree > numberTwo && numberTwo > numberOne) {
        //increasing from 3 to 1
        printf("up\n");
    } else {
        //shows it niether
        printf("neither\n");
    }
    return 0;
}