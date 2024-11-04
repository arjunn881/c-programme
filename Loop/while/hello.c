//WAP print a Hello World multiple time;

#include<stdio.h>
#include<conio.h>

int main(){
    int n;

    int i=0;

    printf("How many times, do you want to print : ");
    scanf("%d", &n);

    while(i<n ){
        printf("\nHello World");
        i++;
    }

    getch();
}