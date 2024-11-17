//3. Write a program in C to find the sum of all elements of the array.

#include<stdio.h>

int main(){
    int arr[3], sum = 0;

    for(int i=0;i<3;i++){
        printf("\nelement - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<3;i++){
        printf(" %d",arr[i]);

        sum =sum + arr[i];
        
    }
    printf("\nsum = %d",sum);

    return 0;
}