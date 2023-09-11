/* A nested loop is a loop inside a loop. It means that you can use one loop inside another loop to repeat a set of statements multiple times. The inner loop is executed one time for each iteration of the outer loop. */

#include <stdio.h>
int main(void){
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }
}