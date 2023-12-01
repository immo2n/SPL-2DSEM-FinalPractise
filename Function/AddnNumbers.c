//3. Write a program using a function to add numbers according to users' wants.
#include <stdio.h>
int add(int values[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+= values[i];
    }
    return sum;
}
int main(){
    int size;
    printf("Enter number count: ");
    scanf("%d", &size);
    int values[size];
    printf("Enter %d numbers: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", & values[i]);
    }
    printf("Sum of 5 numbers: %d\n", add(values, size));
    return 0;
}