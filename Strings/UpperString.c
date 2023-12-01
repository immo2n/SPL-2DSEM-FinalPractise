//6. Write a program in C to convert a string to uppercase.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char string[200];
    printf("Enter the string:\n");
    gets(string);
    for(int i = 0; i < strlen(string); i++){
        string[i] = toupper(string[i]);
    }
    printf("%s", string);
    return 0;
}

/*
Output

Enter the string:
hello world
HELLO WORLD
*/