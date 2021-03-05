//Vector distance - calculating euclidean distance between two vectors.
//Shahid Hussain
//Sunday 20th October 2019

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

int main(void) {

    int vecLength;
    int vecOne[MAX_SIZE] = {0};
    int vecTwo[MAX_SIZE] = {0};
    
    printf("Enter vector length: ");
    scanf("%d", &vecLength);
    
    printf("Enter vector 1: ");
    int counter = 0;
    while (counter < vecLength) {
        scanf("%d", &vecOne[counter]);
        counter++;
    }
    
    printf("Enter vector 2: ");
    counter = 0;
    while (counter < vecLength) {
        scanf("%d", &vecTwo[counter]);
        counter++;
    }
    
    counter = 0;
    int i = 0;
    int j = 0;
    double distance = 0;
    while (counter < vecLength) {
        double d = (vecTwo[j] - vecOne[i]) * (vecTwo[j] - vecOne[i]);
        counter++;
        i++;
        j++;
        distance = distance + d;
    }
    
    printf("Euclidean distance = %lf\n", sqrt(distance));



    re