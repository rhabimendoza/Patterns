/*

 *****
  ****
   ***
    **
     *

*/

#include<stdio.h>

int main(){

     // Create n
     int n;

     // Get n
     scanf("%d", &n);

     // Output pattern
     for(int ctr = 0; ctr < n; ctr++){
          for(int ctr2 = 0; ctr >= ctr2; ctr2++){
               printf(" ");
          }
          for(int ctr3 = n; ctr3 > ctr; ctr3--){
               printf("*");
          }
          printf("\n");
     }
}