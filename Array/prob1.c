//1. Write a program in C to store elements in an array and print them.

#include<stdio.h>

int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        printf("\n Enter element - %d :", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Elements in array are : ");
    for (int i = 0; i <10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
    
}