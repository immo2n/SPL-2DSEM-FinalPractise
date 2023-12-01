//2. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    gets(string);

    int length = strlen(string);
    char new[length];

    for(int i = 0; i < length ; i++){
        for(int j = 0; j < length - 1; j++){
            if(string[j] < string[j+1]){
                new[i] = string[j];
            }
            else {
                new[i] = string[j+1];
            }
        }
    }

    for(int i = 0; i < length; i++){
        printf("%c", new[i]);
    }

    return 0;
}