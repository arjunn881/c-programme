//2. Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>

int main(){
    int arr[10];

    printf("\n Enter elements of the array : ");
    for(int i=0;i<10;i++){
        printf("\n element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n Elements of the array in reverse order : ");

    for(int i=9;i>=0;i--){
        printf(" %d", arr[i]);
    }

    return 0;
}