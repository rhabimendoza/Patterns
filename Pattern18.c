/*

54321
4321
321
21
1

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = n - ctr; ctr2 >= 1; ctr2--){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}