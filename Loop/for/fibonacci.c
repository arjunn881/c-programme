#include<stdio.h>
#include<conio.h>

int main(){
    int n, n1=0, n2=1, next;

    printf("Enter a number to which you want to print : ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++){
        printf(" %d", n1);

        next =n1+n2;
        n1=n2;
        n2=next;
    }

    getch();

}