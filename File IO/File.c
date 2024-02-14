#include <stdio.h>
int main(){
    FILE *file;

    if(NULL == (file = fopen("Data.txt", "r"))){
        printf("Data file is lost! New data written. Run again.");
        file = fopen("Data.txt", "w");
        fprintf(file, "%d", 100);
        fclose(file);
        return 0;
    }

    int data;
    fscanf(file, "%d", &data);
    printf("Read data: %d", data);

    fclose(file);
    return 0;
}