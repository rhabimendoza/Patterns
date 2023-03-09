/*

     *
    **
   ***
  ****
 *****

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = n; ctr2 > ctr; ctr2--){
            printf(" ");
        }
        for(int ctr3 = 0; ctr >= ctr3; ctr3++){
            printf("*");
        }
        printf("\n");
    }
}