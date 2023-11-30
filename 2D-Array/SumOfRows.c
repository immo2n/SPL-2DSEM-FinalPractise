/*2. Write a program in C to show the sum of rows.
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

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += matrix[i][j];
        }
        printf("Sum of row number %d is: %d\n", i+1, sum);
    }

    return 0;
}