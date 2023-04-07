/*

E
E D
E D C
E D C B
E D C B A

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
        for(int ctr2 = 0; ctr2 <= ctr; ctr2++){
            printf("%c ", num);
            num--;
        }
        printf("\n");
        num = 64 + n;
    }
}