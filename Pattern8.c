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
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 0; ctr2 <= ctr; ctr2++){
            printf("* ");
        }
        printf("\n");
    }
    for(int ctr = 0; ctr < n-1; ctr++){
        for(int ctr2 = n-2; ctr2 >= ctr; ctr2--){
            printf("* ");
        }
        printf("\n");
    }
}