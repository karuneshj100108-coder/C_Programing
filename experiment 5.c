/*  Name  : karunesh jadhav 
     UIN : 251C019
    Division : B 
     Roll no. : 16 
     Field : civil */
#include <stdio.h>
int factorial(int num)
{
   int fact =1;
   for(int i=5;i>=1; i--)
   {
       fact= fact*i;
   }  
   return fact;
}

int main()
{
 
  printf("factorial is %d",factorial(5));
  
  return 0;
}
