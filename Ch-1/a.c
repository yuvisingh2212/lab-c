#include <stdio.h>

int main(void){
    int a,b; // We assume a -> height, and b -> width
    int perimeter; // We gonna store our ans in this variable
    // perimeter of rectangle = 2 (w + h)
    printf("Enter height : "); // input -> height
    scanf("%i",&a);
    printf("Enter width : "); // input -> width
    scanf("%i",&b);
    perimeter = 2*(a+b); // operation / expression
    printf("%i\n",perimeter); //output -> perimeter
}