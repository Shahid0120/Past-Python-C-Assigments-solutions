// common_elements.c
// By Shahid Hussain
// october 2016

#include <stdio.h> 
// copy all of the values in source1 which are also found in source2 into destination
// return the number of elements copied into destination

int common_elements(int length, int source1[length], int source2[length], int destination[length]) {
    int i = 0;
    int j = 0;
    int numberOfCopies = 0;
    int ItisTheSame = 0;
    int k = 0;
    int n = 0;
 
    while (i < length) {
        // source1 array     
        j = 0;
        while (j < length) {
            // goes throuhg all source2 elements  
            if (source1[i] == source2[j]) {   
                numberOfCopies++;            
                // if its true plus the source2 array and also copy into return value and destinction array
                while (n < length) {
                    // checks if it has been in the array before
                   if (source1[i] == destination[n]) {
                       numberOfCopies --;
                        ItisTheSame++;
                       
                   } 
                  n++;  
                }
                
                if ( ItisTheSame == 1) {
                    // it has been in the array before
                    ItisTheSame = 0;
                } else { 
                    // hasnt been in the array before
                    destination[k] = source1[i];
                    k++;
                }
                j = j + length;
                
            } else {
                // if its false : pluses to the source 2 element and contineus
                j++;
            }
        }
        // adds to the srouce1 by 1 
        i++;
    } 
   
    return numberOfCopies;
}

// You may optionally add a main function to test your common_elements function.
// It will not be marked.
// Only your common_elements function will be marked.
