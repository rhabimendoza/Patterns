/*

E
D E
C D E
B C D E
A B C D E

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    int num = 64 + n;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = num - ctr; ctr2 <= num; ctr2++){
            printf("%c ", ctr2);
        }
        printf("\n");
    }
}