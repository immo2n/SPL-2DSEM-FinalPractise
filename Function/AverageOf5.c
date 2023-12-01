//5. Write a program using a function to calculate the average of five numbers.
#include <stdio.h>
float avg(int values[5]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum+= values[i];
    }
    return (float) sum/5;
}
int main(){
    int values[5];
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", & values[i]);
    }
    printf("Average of 5 numbers: %.2f\n", avg(values));
    return 0;
}