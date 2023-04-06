/*

E D C B A
D C B A
C B A
B A
A

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
        for(int ctr2 = n; ctr2 > ctr; ctr2--){
            printf("%c ", num);
            num--;
        }
        printf("\n");
        num = 64 + (n - ctr - 1);
    }
}