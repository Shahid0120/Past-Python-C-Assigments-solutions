// Printintg a gird with a x throuhg it
// By Shahid hussain
// 10th October 2019 

#include <stdio.h>

int main(void) {

    int size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i;
    int j;

    i = 1;
    while (i <= size) {
        j = 1;
        while (j <= size) {
            if (j == i || j == ((size + 1) - i)) {
                printf("*");
            } else {
                printf("-");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}