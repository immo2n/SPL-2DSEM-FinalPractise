#include <stdio.h>

typedef struct {
    float a;
    float b;
    
} Triangle;

int main(){

    Triangle t = {5, 6, "Hello"};

    printf("Hand 1: %s", t.c);

    return 0;
}