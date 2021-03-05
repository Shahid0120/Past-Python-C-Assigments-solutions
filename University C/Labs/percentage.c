// percentage program lab 03 
// By Shahid Hussain 
// 4th Octomber 2019 

#include <stdio.h> 

int main(void) {
    int totalMark;
    int totalMarkAwarded;
    double markPercentage; 
    
    // individuals places the total makr of exam
    printf("Enter the total number of marks in the exam: ");
    scanf("%d", &totalMark);
    
    // individuals mark awared
    printf("Enter the number of marks the student was awarded: ");
    scanf("%d", &totalMarkAwarded);
    markPercentage = ((totalMarkAwarded)  / (totalMark * 1.0)) * (100 );
    //show the percentage of the markPercentage
    printf("The student scored %.0lf%% in this exam.\n", markPercentage);

    return 0;
}