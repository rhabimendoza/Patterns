/*

E E E E E
D D D D
C C C
B B
A

*/

#include<stdio.h>

int main(){

    // Create n
    int n;

    // Get n
    scanf("%d", &n);

    // Output pattern
    int num = 69;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = n; ctr2 > ctr; ctr2--){
            printf("%c ", num);
        }
        printf("\n");
        num--;
    }
}