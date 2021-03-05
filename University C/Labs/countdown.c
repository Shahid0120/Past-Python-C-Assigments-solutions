// Count down looping lab 03
// by Shahid Hussain


#include <stdio.h>

int main(void) {
    //initialise counter to 10
    int counter = 10;
    
    // loop until not <= 0
    while (counter >= 0) {
        // print counter
        printf("%d\n", counter);
        // increment counter
        counter = counter - 1;
    }
    return 0;
}