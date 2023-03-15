/*

        *
      * *
    * * *
  * * * *
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
    int a = n * 2 - 2;
    for(int ctr = 0; ctr < n - 1; ctr++){
        for(int ctr2 = 1; ctr2 <= a; ctr2++){
            printf(" ");
        }
        a -= 2;
        for(int ctr3 = 0; ctr3 <= ctr; ctr3++){
            printf("* ");
        }
        printf("\n");
    }
    int b = 0;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 0; ctr2 < b; ctr2++){
            printf(" ");
        }
        b += 2;
        for(int ctr3 = n - 1; ctr3 >=  ctr; ctr3--){
            printf("* ");
        }

        printf("\n");
    }
}