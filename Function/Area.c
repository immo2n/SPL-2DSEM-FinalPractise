//7. Write a program using a function to calculate the area of a circle, triangle, or cylinder.
#include <stdio.h>
#define PI 3.141592654
float circle(int rad){
    return PI*rad*rad;
}
float triangle(float b, float h){
    return 0.5*b*h;
}
float cylinder(float rad,  float h){
    return (2*PI*rad*h) + (2*PI*rad*rad);
}
int main(){
    float rad, b, h;
    
    printf("Enter radius of Circle: ");
    scanf("%f", &rad);
    printf("Area of Circle: %.3f\n", circle(rad));

    printf("Enter base & height of Triangle: ");
    scanf("%f %f", &b, &h);
    printf("Area of Triangle: %.3f\n", triangle(b, h));

    printf("Enter radius & height of Cylinder: ");
    scanf("%f %f", &rad, &h);
    printf("Area of Cylinder: %.3f\n", cylinder(rad, h));

    return 0;
}