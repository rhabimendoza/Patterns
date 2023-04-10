/*

A B C D E
B C D E
C D E
D E
E

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 65 + ctr; ctr2 < 65 + n; ctr2++){
            printf("%c ", ctr2);
        }
        printf("\n");
    }
}