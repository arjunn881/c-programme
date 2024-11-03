//WAP in C to print the area of triangle, rectangle,and square;

#include<stdio.h>
#include<conio.h>

int main(){
    float l,h,at,ar,as;

    printf("Enter lenth:\n");
    scanf("%f", &l);

    printf("Enter height:\n");
    scanf("%f", &h);

    at=l*(h/2);
    ar = l*h;
    as = l*l;

    printf("\narea of triangle: %f", at);
    printf("\narea of rectangle: %f", ar);
    printf("\narea of square: %f", as);

    getch();
}