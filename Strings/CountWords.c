//9. Write a program for counting words in a given string.
#include <stdio.h>
#include <string.h>
int main(){
    char string[200], word[50];

    printf("Enter the string:\n");
    gets(string);

    int count = 0;
    char *token = strtok(string, " ");
    while(token != NULL){
        if(strlen(token) > 1){
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("Word count: %d\n", count);

    return 0;
}

/*
Output

Enter the string:
Write a program for counting words in a given string.
Word count: 8

*/