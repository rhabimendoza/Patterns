/*

55555
4444
333
22
1

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = n; ctr >= 1; ctr--){
        for(int ctr2 = ctr; ctr2 >= 1; ctr2--){
            printf("%d", ctr);
        }
        printf("\n");
    }
}