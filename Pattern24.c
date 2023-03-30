/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int num = 1;
    for(int ctr = 0; ctr < n; ctr++){
        for(int ctr2 = 0; ctr2 <= ctr; ctr2++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}