// 2. Write a Code in C to Add two distances (in inch-feet)
#include <stdio.h>

struct Measurement
{
    float inch;
    float feet;
};

int main()
{
    struct Measurement m1, m2;
    printf("Enter first value(inch-feet): ");
    scanf("%f %f", &m1.feet, &m1.inch);
    printf("Enter second value(inch-feet): ");
    scanf("%f %f", &m2.feet, &m2.inch);

    float f1 = m1.feet+(m1.inch/12);
    float f2 = m2.feet+(m2.inch/12);
    float f = f1 + f2;

    printf("Addition: %.2f", f);

    return 0;
}