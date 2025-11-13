/*  Name  : karunesh jadhav 
     UIN : 251C019
    Division : B 
     Roll no. : 16 
     Field : civil */
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

 
    printf("Enter two integer values: ");
    scanf("%d %d", &num1, &num2);

   
    ptr1 = &num1;
    ptr2 = &num2;

   
    sum = *ptr1 + *ptr2;

    
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

    return 0;
}
