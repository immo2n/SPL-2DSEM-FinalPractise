//3. Write a program using a function to add 5 numbers.
#include <stdio.h>
int add(int values[5]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum+= values[i];
    }
    return sum;
}
int main(){
    int values[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", & values[i]);
    }
    printf("Sum of 5 numbers: %d\n", add(values));
    return 0;
}