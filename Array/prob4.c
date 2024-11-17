//Write a program in C to copy the elements of one array into another array.

#include<stdio.h>

int main(){
    int i,arr1[100],arr2[100];

    for(i=0; i<10;i++){
        printf("\nelementof arr1 - %d : ", i);
        scanf("%d", &arr1[i]);
    }


    printf("Elements of arr2 : \n");

    for(i=0; i<10;i++){
        arr2[i] = arr1[i];

        printf(" %d", arr2[i]);
    }

   

    return 0;

}