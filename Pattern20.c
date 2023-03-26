/*

5
54
543
5432
54321

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = n; ctr >= 1; ctr--){
        for(int ctr2 = n; ctr2 >= ctr; ctr2--){
            printf("%d", ctr2);
        }
        printf("\n");
    }
}