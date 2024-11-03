//WAP to enter the values grams & convert into kiloram and grams;

#include<stdio.h>
#include<conio.h>
int main(){
    int gms,kgm,gm;

    printf("enter paisa : \n");
    scanf("%d", &gms);

    kgm = gms/1000;
    gm = gms%1000;

    printf("\n%d kilograms %d grams", kgm,gm);

    getch();
}