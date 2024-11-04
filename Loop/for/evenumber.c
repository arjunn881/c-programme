//WAP  to display even numbers
#include<stdio.h>
#include<conio.h>

int main(){
    int n,a;

     printf("Enter an integer upto which you want even number : ");
     scanf("%d", &n);

     for(int i=1;i<n;i++){
        if(i%2 == 0){
            printf("\n even number = %d", i);
        }

        else printf("\n odd number = %d",i);
     }
    getch();
}