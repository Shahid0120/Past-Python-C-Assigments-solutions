// palindrone.c 
// By Shahid Hussain 

#include <stdio.h> 

#define MAX_SIZE 4096
int main(void) {
    char input[MAX_SIZE];
    int i = 0;
   
    // input
    printf("Enter a string: ");
    
    
    
    fgets(input, MAX_SIZE, stdin);
    while (input[i] != '\n') {
        i++;
    }
    
    i--;
    int Yes = 0;
    int n = 0;
    while (n <= i) {
        if (input[i] == input[n]) {    
            Yes = 1;
            n++;
            i--;
        } else {
            Yes = 0;
            n = MAX_SIZE;
        }
    } 
        
        
    if (Yes == 0) {
        printf("String is not a palindrome\n");
    } else {
        printf("String is a palindrome\n");
    }

       
    
    
    
    
    
    // read eachcharacter within the string
    // then 
    


}