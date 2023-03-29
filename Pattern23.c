/*

12345
2345
345
45
5

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 1; ctr <= n; ctr++){
        for(int ctr2 = ctr; ctr2 <= n; ctr2++){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}