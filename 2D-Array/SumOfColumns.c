/*1. Write a program in C to show the sum of columns.
|2 2 3|
|4 5 6|
|7 8 9|
*/
#include <stdio.h>
int main()
{
    int matrix[3][3] = {
        {2, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int c = 0; c < 3; c++){
        int sum = 0;
        for(int r = 0; r < 3; r++){
            sum+= matrix[r][c];
        }
        printf("Sum of column number %d is: %d\n", c+1, sum);
    }

    return 0;
}