#include<stdio.h>
int main(void){
    int n,ans; // we took two variable => n - for input, ans - store output 
    printf("Enter a number : ");
    scanf("%i", &n); // input -> n
    ans = n*n*n; //operation / expression
    printf("%i\n",ans); // output -> ans
}