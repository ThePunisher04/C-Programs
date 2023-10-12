#include<stdio.h>

int main() {
   int arr[30], element, num, i;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   printf("\nEnter the element to be inserted :");
   scanf("%d", &element);

   int location = (num / 2) +1;

   //Create space at the specified location
   for (i = num; i >= location; i--) {
      arr[i] = arr[i - 1];
   }

   num++;
   arr[location - 1] = element;

   //Print out the result of insertion
   for (i = 0; i < num; i++)
      printf("%d ", arr[i]);

   return (0);
}