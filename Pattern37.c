/*

ABCDE
FGHI
JKL
MN
O

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    int num = 65;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 0; ctr2 < n - ctr; ctr2++){
            printf("%c", num);
            num++;
        }
        printf("\n");
    }
}