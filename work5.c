#include <stdio.h>

int main() {
   int sum = 0;
   int number = 0;

   printf("Enter number: ");
   scanf("%d", &number);

   while (number != 0) {
      sum = sum + number;

      scanf("%d", &number);
   
   }


   printf("%d \n", sum);


  return 0;
}
