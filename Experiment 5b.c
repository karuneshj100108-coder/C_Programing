/*  Name : karunesh jadhav 
    UIN : 251C019
    Division : B 
    Roll no. : 16 
    Field : civil */
#include<stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
{
    return 1;
}
else 
{
    return num * factorial(num - 1);
}
}

int main()
{
    printf("factorial of 5 is %d\n", factorial(5));
    return 0;
}
