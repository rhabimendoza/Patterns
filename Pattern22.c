/*

5
45
345
2345
12345

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = n; ctr >= 1; ctr--){
        for(int ctr2 = ctr; ctr2 <= n; ctr2++){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}