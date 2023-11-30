/*1. Write a program in C to show the sum of the left diagonal.
|2 2 3 7|
|4 5 6 8|
|7 8 9 9|
|1 5 2 8|
*/
#include <stdio.h>
int main()
{
    int matrix[4][4] = {
        {2, 2, 3, 7},
        {4, 5, 6, 8},
        {7, 8, 9, 9},
        {1, 5, 2, 8}
    };

    int sum = 0;

    for(int i = 0; i < 4; i++){
        sum+= matrix[i][i];
    }
    
    printf("Sum of the left diagonal: %d\n", sum);
    return 0;
}