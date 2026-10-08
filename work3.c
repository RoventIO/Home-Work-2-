#include <stdio.h>

int main() {
  int num = 0;

  printf("Enter number \n");
  scanf("%d", &num);

  for(int i = 1;i <= num;i++) {
          if(i % 2 == 0) {
	    printf("%d \n",i);
	  }
  
  }
}
