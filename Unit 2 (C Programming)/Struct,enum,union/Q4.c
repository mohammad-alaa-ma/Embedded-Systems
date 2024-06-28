#include <stdio.h>
//scan array of struct and display it

struct student {
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct student s1[10];
    printf("Enter information of students\n");
    for (int i = 0; i < 10; i++)
    {
        s1[i].roll = i + 1;
        printf("For roll number %d\n", s1[i].roll);
        printf("Enter name: ");
        fflush(stdin);  fflush(stdout);
        gets(s1[i].name);
        fflush(stdin);  fflush(stdout);
        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
        printf("\n");
    }
    printf("Displaying information of students\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Information for roll number %d\n", s1[i].roll);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f", s1[i].marks);
        printf("\n");
    }
}
