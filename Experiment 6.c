/*  Name : karunesh jadhav 
    UIN : 251C019
    Division : B 
    Roll no. : 16 
    Field : civil */
#include<stdio.h>
int storage_class()
    {
       static int abc = 0;
       printf("Counter is %d \n ",abc);
       abc++;
    }
    int main()
    {
        storage_class();
        storage_class();
        storage_class();
        storage_class();
        
        return 0;
    }
