#include <stdio.h>
//scan in a struct and display it
struct student {

char name[20];
int roll;
float marks;

};

void main()
{
    struct student s;

    printf("Enter student's info\n");
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

    printf("\nDisplaying info\n");
    printf("Name:%s \nRoll number:%d \nMarks:%.2f",s.name,s.roll,s.marks);

}
