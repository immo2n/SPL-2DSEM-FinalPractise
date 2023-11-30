/*4. Write a program in C to show the sum of the right diagonal, transpose
|2 2 3 7|
|4 5 6 8|
|7 8 9 9|
|1 5 2 8|
*/
#include <stdio.h>
int main(){
    int matrix[4][4] = {
        {2, 2, 3, 7},
        {4, 5, 6, 8},
        {7, 8, 9, 9},
        {1, 5, 2, 8}
    };

    int sum = 0, row = 0;
    for(int i = 3; i >= 0; i--){
        sum+= matrix[row][i];
        row++;
    }
    
    printf("Sum of the right diagonal: %d\n", sum);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}