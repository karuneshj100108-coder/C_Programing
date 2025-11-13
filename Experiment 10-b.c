/*  Name  : karunesh jadhav 
     UIN : 251C019
    Division : B 
     Roll no. : 16 
     Field : civil */#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

   
    ptr = &arr[4]; 

    printf("Array elements in reverse order:\n");

 
    for (i = 0; i < 5; i++) {
        printf("%d ", *ptr); 
        ptr--;               
    }
    printf("\n");

    return 0;
}
