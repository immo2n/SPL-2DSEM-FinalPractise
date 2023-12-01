//2. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int n){
    return n*n;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("Square of %d is %d", n, square(n));
}