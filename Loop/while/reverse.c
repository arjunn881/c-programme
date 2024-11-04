//Wap to reverse the digit of a number;

#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    int reversed = 0 ;

    printf("Enter a number : ");
    scanf("%d", &n);

    
    
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n = n/ 10;
    }
    printf("Reversed number : %d", reversed);

    getch();

}