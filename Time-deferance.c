// 3. Write a Code in C to Calculate the difference between two time periods

#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct Time t1, t2;

    printf("Enter first time(hh mm ss): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    printf("Enter second time(hh mm ss): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    int sec1 = t1.sec + (t1.min * 60) + (t1.hour * 3600);
    int sec2 = t2.sec + (t2.min * 60) + (t2.hour * 3600);

    int d = sec1 - sec2;
    int h = d / 3600;
    int r = d % 3600; //Remender
    int m = r / 60;
    int s = r % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}