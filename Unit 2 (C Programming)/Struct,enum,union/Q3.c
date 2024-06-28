#include <stdio.h>
//Adding two complex numbers by passing structure to a function

struct num {
    float real;
    float img;
};
struct num add_cmplx(struct num n1, struct num n2);

int main()
{
    struct num n1, n2, ans;
    printf("Enter information of 1st complex number\n");
    printf("Enter real and imaginary: ");
    scanf("%f%f", &n1.real, &n1.img);

    printf("Enter information of 2nd complex number\n");
    printf("Enter real and imaginary: ");
    scanf("%f%f", &n2.real, &n2.img);

    ans = add_cmplx(n1,n2);
    printf("Sum=%.1f+%.1fi", ans.real, ans.img);
}

struct num add_cmplx(struct num n1, struct num n2)
{
    struct num sum;
    sum.real = n1.real + n2.real;
    sum.img = n1.img + n2.img;
    return sum;
}

