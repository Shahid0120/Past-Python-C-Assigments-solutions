// count_bigger.c 
// By Shahid Hussamin
// october 2019


#include <stdio.h>

#define TEST_ARRAY_SIZE 8

int count_bigger(int length, int array[]);
// This is a simple main function which could be used
// to test your count_bigger function.
// It will not be marked.
// Only your count_bigger function will be marked.

int main(void) {
    int test_array[TEST_ARRAY_SIZE] = {141, 5, 92, 6, 535, -89, -752, -3};

    int result = count_bigger(TEST_ARRAY_SIZE, test_array);

    printf("%d\n", result);
    return 0;
}

// return the number of "bigger" values in an array (i.e. larger than 99
// or smaller than -99).
int count_bigger(int length, int array[]) {
    int i = 0;
    int number = 0;
    while (i < length) {
        // if its bigger then 99
        if (array[i] > 99) {
            number++;
            // if its less then -99
        } else if ( array[i] < -99) {
            number++;
            // its its not with those boundaries 
        } else {

        }
        i++;
    }
    return number;
}