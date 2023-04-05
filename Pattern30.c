/*

A
B A
C B A
D C B A
E D C B A

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
        for(int ctr2 = 0; ctr2 <= ctr; ctr2++){
            printf("%c ", num);
            num--;
        }
        printf("\n");
        num = 65 + ctr + 1;
    }
}