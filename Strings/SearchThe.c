//5. Write a program in C to find the number of times the word 'the' appears in the string.
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], t[] = "the";

    printf("Enter the string: ");
    gets(s);

    char target[100];
    strcpy(target, s);

    int count = 0;
    while(strstr(target, t) != NULL){
        count++;

        strcpy(target, strstr(target, t) + strlen(t));

    }
    printf("The word 'the' appears: %d times\n", count);
}