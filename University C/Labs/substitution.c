// Substitution
// by Shahid Hussain 
// october 2019

#include <stdio.h> 
#include <string.h>




int encrypt(int character, int shift);
int main(void) {
    int inputcharacter; 
    int outputcharacter = 0;
    int poop;
    int alphabetPosition;
    char arraynumb[26] = {0};
    char arrayNumb[26] = {0};
    char alphabetorder[26] = {0};
    char message[100] = {0}; 
    
    
    arraynumb[0] = 'a';
    arraynumb[1] = 'b';
    arraynumb[2] = 'c';
    arraynumb[3] = 'd';
    arraynumb[4] = 'e';
    arraynumb[5] = 'f';
    arraynumb[6] = 'g';
    arraynumb[7] = 'h';
    arraynumb[8] = 'i';
    arraynumb[9] = 'j';
    arraynumb[10] = 'k';
    arraynumb[11] = 'l';
    arraynumb[12] = 'm';
    arraynumb[13] = 'n';
    arraynumb[14] = 'o';
    arraynumb[15] = 'p';
    arraynumb[16] = 'q';
    arraynumb[17] = 'r';
    arraynumb[18] = 's';
    arraynumb[19] = 't';
    arraynumb[20] = 'u';
    arraynumb[21] = 'v';
    arraynumb[22] = 'w';
    arraynumb[23] = 'x';
    arraynumb[24] = 'y';
    arraynumb[25] = 'z';
  
    
    arrayNumb[0] = 'A';
    arrayNumb[1] = 'B';
    arrayNumb[2] = 'C';
    arrayNumb[3] = 'D';
    arrayNumb[4] = 'E';
    arrayNumb[5] = 'F';
    arrayNumb[6] = 'G';
    arrayNumb[7] = 'H';
    arrayNumb[8] = 'I';
    arrayNumb[9] = 'J';
    arrayNumb[10] = 'K';
    arrayNumb[11] = 'L';
    arrayNumb[12] = 'M';
    arrayNumb[13] = 'N';
    arrayNumb[14] = 'O';
    arrayNumb[15] = 'P';
    arrayNumb[16] = 'Q';
    arrayNumb[17] = 'R';
    arrayNumb[18] = 'S';
    arrayNumb[19] = 'T';
    arrayNumb[20] = 'U';
    arrayNumb[21] = 'V';
    arrayNumb[22] = 'W';
    arrayNumb[23] = 'X';
    arrayNumb[24] = 'Y';
    arrayNumb[25] = 'Z';
    
    
    
    int i = 0;
    while (i < 26) {
        inputcharacter = getchar();
        alphabetorder[i] = inputcharacter;
        i++;
    }
    
   outputcharacter = getchar();
   while (outputcharacter != '\0') {
        int k = 0;
        
       
        while (outputcharacter != '\0' && outputcharacter != EOF) {        
            message[k] = outputcharacter;      
            k++;
            outputcharacter = getchar();
        
        }
        int j = 0;
        i = 0;
        int n = 0;
        while (i < k) {
            if (j == 25) {
                j = 0;
            // lower case
            } else {
                if (message[n] == arraynumb[j] && message[n] <= 122 && message[n] >= 97) {
                    n++;
                    i++;
                    printf("%c", alphabetorder[j]);
                    j = 0;
                // capital
                } else if (message[n] == arrayNumb[j] && message[n] <= 90 && message[n] >= 65) {
                    n++;
                    i++;
                    alphabetPosition = alphabetorder[j] - 'a';
                    poop = 'A' + alphabetPosition;
                    printf("%c", poop);
                    j = 0;
                // anything else
                } else if ( message[n] == '\n' ) {
                    n++;
                    j = 0;
                } else if ((message[n] > 122) || (message[n] < 97 && message[n] > 90) || message[n] < 65) {
                    printf("%c", message[n]);
                    n++;
                    i++;
                    j = 0;
                } else {
                    j++;
                }
            } 
            
        }
        
       // printf("\n");  
        
    }
    
}
    
