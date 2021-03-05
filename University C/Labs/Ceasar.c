// ceasar.c 
// by Shahid Hussain
// Wednesday

#include <stdio.h>

int encrypt(int character, int shift);
int main(void) {
    int character;
    char new_character;
    int shift;
    
    // inptu for shift of characters
    scanf("%d\n", &shift);
    
    // take one character
    character = getchar();
    
    while (character != EOF) {
        
        new_character = encrypt(character, shift);
        // shift the new aharacte
        putchar(new_character);
        character = getchar();
    }
    return 0;
} 


int encrypt(int character, int shift) {
    char c = character;
    char new_character = 0;
    
    
   
    // intially boundaires is between z and a
    if (c <= 'z' && c >= 'a') {
        if (c + shift > 122 || c + shift < 97) {
            shift = shift % 26;           
        }
        // greater then z
        if (c + shift > 'z') {
            c = c + shift;          
            new_character = (c - 'z') + 'a'- 1;
            return new_character;   
        // less then a
        } else if (c + shift < 'a') {
            c = c + shift;          
            new_character = (c - 'a') + 'z' + 1;
            return new_character;
        // still within boundaires
        } else {
            character = character + shift;
            return new_character = character;
        } 
    // initially boundaries between Z and A
    } else if (c <= 'Z' && c >= 'A') {
        if ( c + shift > 90 || c + shift < 65) {
            shift = shift % 26;
        }
        // greater then Z
        if (c + shift > 'Z') {
            c = c + shift;          
            new_character = (c - 'Z') + 'A'- 1;
            return new_character; 
        // less then A
        } else if (c + shift < 'A') {
            c = c + shift;          
            new_character = (c - 'A') + 'Z' + 1;
            return new_character;
        // still within boundaires
        } else {
            character = character + shift;
            return new_character = character;
        }  
    // for any other symbolas
    } else { 
        return new_character = character;
    } 
    
}
/*
    if (shift < 0) {
        // for negative number shift
        if ( (c - shift) < 'a' || (c - shift) > 'z') {
            c = c - shift;
            new_character = (c + 'z') - 'a'+ 1;
            return new_character;  
        }    
    // positive shift     
    } else if (shift > 0) {
        if ( c + shift > 'z') { 
            c = c + shift;          
            new_character = (c - 'z') + 'a'- 1;
            return new_character;   
        } else if ( ( c + shift) > 'Z' && (c + shift) < 'a') {
            c = c + shift;          
            new_character = (c - 'z') + 'a'- 1;
            return new_character; 
        } else if ( c == ' ') {
            new_character = ' ';
            return new_character;
        } else if (c >= 'a' && c <= 'z') {
            new_character = c + shift; 
            return new_character;
        } else if (c >= 'A' && c <= 'Z') {
            new_character = c + shift; 
            return new_character;
        } else {
            return new_character = character;
        }
    } else {
      return new_character = character;  
    }    
    return new_character;
} 
    
    
*/  
    


