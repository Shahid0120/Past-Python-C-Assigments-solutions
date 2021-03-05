// swap_case.c 
// Shahid Hussain 


#include <stdio.h>

int swap_character(int character);
int main(void) {
    //reads a chaarcter
    int character;
    character = getchar();
    
    // find outs weather it is letter or not
    while (character != EOF) {
        // if its upper case then converts it to lower case
        if ((character <= 'z' && character >= 'a') || (character >= 'A' && character <= 'Z')) {
        // if its lower case it converts it to upper case
            swap_character(character);
            putchar(character);
        } else {
        // if its not leater it prints out the and then goes to the next number
            putchar(character);
            
        }
        character = getchar();
    }
    
    
    return 0;

}

int swap_character(int character) {
    // find if its lower case or upper case
    int aphPos = 0;
     if (character <= 'z' && character >= 'a') {
        // converts the lowerr case to upper case 
        aphPos = character - 'a';
        aphPos = 'A' + aphPos;
     } else if (character >= 'A' && character <= 'Z') {
        // coverts upper case to lower case
        aphPos = character - 'A';
        aphPos = 'a' + aphPos;
     }
    return aphPos;
}