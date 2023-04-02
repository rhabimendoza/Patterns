/*

A B C D E
A B C D
A B C
A B
A

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
        for(int ctr2 = n - ctr; ctr2 >= 1; ctr2--){
            printf("%c ", num);
            num++;
        }
        printf("\n");
        num = 65;
    }
}