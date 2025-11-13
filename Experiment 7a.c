/*  Name  : karunesh jadhav 
     UIN : 251C019
    Division : B 
     Roll no. : 16 
     Field : civil */
#include <stdio.h>
int main(){
    int i, n, arr[100], largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    return 0;
}
