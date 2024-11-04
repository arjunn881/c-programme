//WAP in C to print Hello World using for loop;

#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    printf("How many times do you want to print?\n");
    scanf("%d",&n);

    for(int i=0; i<=n; i++){
        printf("\nHello World");
    }

    getch();
}