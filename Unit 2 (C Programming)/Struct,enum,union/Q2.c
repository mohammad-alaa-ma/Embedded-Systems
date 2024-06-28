#include <stdio.h>
//sum of two distances using struct

struct dist {
    int feet;
    float inch;
} d1, d2, ans;

void main()
{
    printf("Enter information of 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("Enter information of 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    ans.feet = d1.feet + d2.feet;
    ans.inch = d1.inch + d2.inch;
    if (ans.inch > 12)
    {
        ans.inch -= 12;
        ans.feet++;
    }
    printf("Sum of distances=%d'%.1f\"", ans.feet, ans.inch);
}

