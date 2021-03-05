// invsible
// Shahid Hussain
// Wednesday

#include <stdio.h> 


int main(void) {
    int array[1000] = {0};
    int i = 0;
    
    while (scanf("%d", &array[i]) != EOF) {
        i++;
    }
    printf("Indivisible numbers: ");
    int k = 0;
    int j = 0;
    int check = 0;
    while (k < i) {
        j = 0;
        check = 0;
        while (j < i) {     
            if (array[k] % array[j] == 0 && j != k) {                        
                check = 1;
            }
            j++;
        }
        if (check == 0) {
            printf("%d ", array[k]);
        }
        k++;      
    } 
    printf("\n");
    



}