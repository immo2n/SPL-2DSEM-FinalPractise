//8.Reverse a string.
#include <stdio.h>
#include <string.h>
int main(){
    char string[200];
    printf("Enter the string:\n");
    gets(string);
    printf("%s\n", strrev(string));
    return 0;
}

/*
Output

Enter the string:
Hello World
dlroW olleH

*/