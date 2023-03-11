/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Create temporary and final variables
    int temp = 0;
    int fin = 0;

    // Output the upper part of pattern
    for(int ctr = 1; ctr < n; ctr++){
        for(int ctr2 = n-1; ctr2 >= ctr; ctr2--){
            printf(" ");
        }
        for(int ctr3 = 0; ctr3 < ctr; ctr3++){
            printf("*");
            temp = ctr3;
        }
        if(temp != 0){
            int a = ctr-1;
            fin = a;
            while(a != 0){
                printf("*");
                a--;
            }
        }
        printf("\n"); 
    }

    // Output the middle part of pattern
    fin += n + 1;
    for(int ctr = 0; ctr < fin; ctr++){
        printf("*");
    }
    printf("\n");

    // Output the bottom part of pattern
    for(int ctr = 1; ctr < n; ctr++){
        for(int ctr2 = 0; ctr2 < ctr; ctr2++){
            printf(" ");
        }
        for(int ctr3 = n; ctr3 > ctr; ctr3--){
            printf("*");
            temp = ctr3;
        }
        if(temp != n){
            int a = n - ctr - 1;
            while(a != 0){
                printf("*");
                a--;
            }
        }
        printf("\n");
    }
}
