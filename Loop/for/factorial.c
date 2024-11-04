//WAP to display factorial of a number;

#include <stdio.h>

int main() {
    int number;
    int factorial = 1;
     printf("Enter an number : ");
     scanf("%d", &number);
    
    printf("\n%d", number);
    
    for (int i = 1; i < number; i++) {
        printf(" * (%d - %d)", number, i);
    }
    

  
    for (int i = number; i > 0; i--) {
        factorial = factorial * i;
    }

    printf(" = %d\n", number, factorial);
    
    return 0;
}


