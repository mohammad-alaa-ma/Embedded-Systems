/*Write a program in C to show a pointer to an array which contents
are pointer to structure.*/
#include <stdio.h>
struct Employee {
        char* name;
        int id;
    };
void main()
{
    static struct Employee emp1 = {"Mo",1},emp2 = {"Ab",2}, emp3 = {"xy",3};
    struct Employee (*arr[])= {&emp1, &emp2, &emp3};
    struct Employee (*(*pt)[3]) = &arr;
    printf("Employee Name: %s\n",(**(*pt+1)).name);
    printf("Employee ID : %d",(*(*pt+1))->id);

}
