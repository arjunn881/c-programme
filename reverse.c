#include <stdio.h>
#include <conio.h>

int main()
{

    // int a,b, temp;
    // printf("Enter a and Enter b : \n");
    // scanf("%d %d", &a, &b);

    // temp=a;
    // a=b;
    // b=temp;

    // printf("a=%d", a);
    // printf("b=%d", b);

    int a,x,y,z;

    printf("Enter a number : \n");

    scanf("%d", &a);

    if(a<100 && a>9){
      x = a%10;
      y = a/10;
      z = x*10 + y;
    }

    printf("Reversed value=%d", z);
    return 0;
}