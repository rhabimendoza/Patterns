/*

1
21
321
4321
54321

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = ctr + 1; ctr2 >= 1; ctr2--){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}