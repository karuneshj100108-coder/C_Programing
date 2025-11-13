/*  Name : karunesh jadhav 
    UIN : 251C019
    Division : B 
    Roll no. : 16 
    Field : civil */
#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int xyz = factorial(5);
    printf("factorialof 5 is %d\n", xyz);
    return 0;
}
