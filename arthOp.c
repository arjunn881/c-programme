#include<stdio.h>
#include<conio.h>

int main(){
    int a, b, sum, sub, product, div, rem;

    printf("Enter a and Enter b : \n");
    scanf("%d %d",&a,&b);

    sum = a+b;
    sub = a-b;
    product = a*b;
    div = a/b;
    rem = a%b;

    printf(" sum = %d\n sub = %d\n product is %d\n div is %d\n rem is %d", sum, sub ,product, div, rem);

    getch();
    
}