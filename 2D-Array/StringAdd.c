//6. Add two strings
#include <stdio.h>
#include <string.h>
int main(){
    char string1[] = "Hello";
    char string2[] = "World!";
    
    strcat(string1, string2);

    printf("%s", string1);

    return 0;
}