#include <stdio.h>
int main(){
    int matrix[3][3] = {
        {1, 2, 4},
        {2, 3, 4},
        {2, 6, 9}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[i][j]%2 == 0){
                printf("0 ");
            }
            else {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}