/ devowel.c 
// Attemp 2
// Shahid Hussain 
// Nov 2019

#include <stdio.h> 

#define MAX_CHARACTER 1024

int is_vowel(int character);
int main(void) {
    
   
    // reads a character
    int character;
    character = getchar();
    
    // see weather character is a vowel or no
    while (character != EOF) {
    // if the character is vowel it igornoes and goes to the next character
        if (is_vowel(character) == 1) { 
         // if it is not a vowel it prints the character
        } else {
            putchar(character);  
        }
        character = getchar();

    }
       
}

// if the character is a vowel
int is_vowel(int character) {
    int counter = 0;
    if (character == 'a'|| character == 'e' || character == 'i' || character == 'o'|| character == 'u') {
            counter++;
    }
    return counter;
}