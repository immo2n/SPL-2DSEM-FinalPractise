//7.Write a C program to count each character in a given string.
#include <string.h>
#include <stdio.h>
int alreadyDone(char target, char done[], int size){
    for(int i = 0; i < size; i++){
        if(target == done[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    char string[200];
    printf("Enter string:\n");
    gets(string);

    char done[200];
    int found = 0;

    for(int i = 0; i < strlen(string); i++){
        if(!alreadyDone(string[i], done, strlen(string))){
            int count = 0;
            for(int j = 0; j < strlen(string); j++){
                if(string[j] == string[i]){
                    count++;
                }
            }
            done[found] = string[i];
            found++;
            printf("Count of '%c' is: %d\n", string[i], count);
        }
    }

    return 0;
}

/*
Output

Enter string:
Hello World!
Count of 'H' is: 1
Count of 'e' is: 1
Count of 'o' is: 2
Count of ' ' is: 1
Count of 'W' is: 1
Count of 'r' is: 1
Count of 'l' is: 3
Count of 'd' is: 1
Count of '!' is: 1

*/