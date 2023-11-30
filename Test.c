#include <stdio.h>

union Numbers {
    int a;
    int b;
};

int main(){

    union Numbers n;
    n.a = 12;
    n.b = 15;

    printf("%d", n.a);

    return 0;
}