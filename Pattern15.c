/*

1
12
123
1234
12345

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 1; ctr <= n; ctr++){
        for(int ctr2 = 1; ctr2 <= ctr; ctr2++){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}