//WAP in c  to print student details;


#include<stdio.h>
#include<conio.h>

int main(){
    
    int studentID;
    int studentAge;
    float studentFees;
    char studentGrade;


    
    printf("Enter the grade of the student:\n");
    scanf("%c",&studentGrade);

    printf("Enter the student ID/Roll no.:\n");
    scanf("%d",&studentID);

    printf("Enter the age of the student:\n");
    scanf("%d",&studentAge);

    printf("Enter the fees of the student:\n");
    scanf("%f",&studentFees);




    printf("\nStudent ID  : %d\n", studentID);
    printf("Student Age  : %d\n", studentAge);
    printf("Student Fees  : %f\n", studentFees);
    printf("Student Grade  : %c\n", studentGrade);

    return 0;

}