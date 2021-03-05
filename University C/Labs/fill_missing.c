// fill_missing.c
// By Shahid Hussain z5257684
// October 2019


#include <stdio.h> 

#define MAX_NUMBERS 1000


int main(void) {
    // first while loop to read all the intergers
    int numb[MAX_NUMBERS] = {0};
   
    int numbers = 0;
    
    int i = 0;
    while (scanf("%d", &numb[i]) != EOF) {
        // scanf goes insdie here until EOF
        i++;
        numbers++;
    } 
    

    int n = 0;
    while (n < numbers) {
        // for one line of input
        if (numbers == 1) {
            if ( numb[n] != 1) {
                n = 1;
                while ( n < numb[0]) {
                    printf("%d ", n);
                    n++;
                }
            
            }
        // for multiple lines of input
        } else {
            // true continue to the next array
            if ( numbers - 1 == n) {
                n = n + numbers;
            } else if (numb[n] == numb[n+1] - 1) {
              
            } else if ( numb[n] != numb[n+1] - 1) {
                printf("%d ", numb[n] + 1);
                
            }
           n++;
        }
    
    
    }
    printf("\n");
}
    
    
    /*
    // should find the the highest integers
    // then it should use that integer as the upper rnage of the loop counter and
    // thenn is should go thourhg all number idenitfy weather the numbers are insdie so 
    // if the higest numebr is 9 
    // it will be i < 0 and start is 1 in the array? is 2?
    i = 0;
    int j = 0;
    int highestNumber = 0;
    while (i < numbers) {
        // if the previsous ones is higher then the other one 
        j = 0;
        while (j < numbers) {
            if (numb[j] > numb[i] && i != j) {
                 higestNumber = numb[j];
                    i = j;  
            } else {
                j++;   
            }
            j++;
        }
        i++;  
    }
    
    
    
    i = 1;
    int n = 0;
    while (i < highestnumber) {
        // loop thoruhg all the numbers and 
        n = 0;
        while (n < numbers) {
            if (array[n] == i) {
              n++; 
            } else if ( array[n] != i) {
                while(k < numbers) {
                    if ( array[k] != i ) {
                        k++;
                    } else if ( array[k] == i) {
                        
                    }
                    k++: 
                
                }
            }
                
        }
        i++;
    }
        
    
    
    
}
    */

