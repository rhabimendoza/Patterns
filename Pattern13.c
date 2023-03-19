/*

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    int a = n * 2 - 1;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 2; ctr2 <= a; ctr2++){
            printf(" ");
        }
        a -= 2;
        for(int ctr3 = 0; ctr3 <= ctr; ctr3++){
            printf("* ");
        }
        printf("\n");
        
    }
}