//WAP in c to display multiplication table upto 10 using for loop;

#include<stdio.h>
#include<conio.h>

int main(){
    int n;
     printf("Enter an integer : \n");
     scanf("%d", &n);

     for(int i=1;i<=10;i++){
        printf("\n%d*%d = %d",n,i,n*i);
     }

     getch();
}