#include <stdio.h> 

int main() {
    int n = 0;
    int result = 0;

    printf("Enter number\n");
    scanf("%d", &n);

    for(int i = 0;i <= n;i++) {
            result = i + result;
    
    }


    printf("%d", result);
}
