/*

* * * * *
  * * * *
    * * *
      * *
        *

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    int b = 2;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 3 ; ctr2 <= b; ctr2++){
            printf(" ");
        }
        b += 2;
        for(int ctr3 = n; ctr3 > ctr; ctr3--){
            printf("* ");
        }
        printf("\n");
    }
}