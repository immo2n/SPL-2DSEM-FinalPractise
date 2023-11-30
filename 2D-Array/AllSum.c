/*5.Write a program in C to show sum of all elements.
|2 2|
|4 5|
*/
#include <stdio.h>
int main()
{
    int matrix[2][2] = {
        {2, 2},
        {4, 5}
    };

    int sum = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum+= matrix[i][j];
        }
    }
    
    printf("Sum of all elements: %d\n", sum);
    return 0;
}