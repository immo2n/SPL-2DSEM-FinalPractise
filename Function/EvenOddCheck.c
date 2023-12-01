//6. Write a Program using a function to check whether a number is even or odd.
#include <stdio.h>
int check(int n){
    if(n%2 == 0){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(check(n)){
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
}