//WAP to enter paisa & convert into rupees and paisa;

#include<stdio.h>
#include<conio.h>
int main(){
    int p,rs,ps;

    printf("enter paisa : \n");
    scanf("%d", &p);

    rs = p/100;
    ps = p%100;

    printf("\n%d rupees %d paisa", rs,ps);

    getch();
}