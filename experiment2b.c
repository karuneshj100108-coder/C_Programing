/* Name: karunesh Jadhav
Age :18
Class:civil
Division: B
UIN : 251C019*/
#include <stdio.h>
int main() {
  int start , end , sum = 0;
  
  printf("Enter a starting number: ");
  scanf("%d", &start);
  
  printf("Enter the ending number: ");
  scanf("%d", &end);
  
  for(int i = start; i <= end; i++){
     if (i % 2 != 0){
        sum += 1;
      }
   }

   printf("Sum of odd number between %d and %d = %d\n",start,end,sum);
  return 0;
}
