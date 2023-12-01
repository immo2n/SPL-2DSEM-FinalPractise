//5. Write a program in C to find the frequency of characters.
#include <stdio.h>
#include <string.h>
int alreadyDone(char c, char done[], int doneSize){
    for(int i = 0; i < doneSize; i++){
        if(done[i] == c){
            return 1;
        }
    }
    return 0;
}
int main(){
    char string[200];
    printf("Enter the string:\n");
    gets(string);

    char done[100];
    int found = 0;

    for(int i = 0; i < strlen(string); i++){
        if(alreadyDone(string[i], done, strlen(done))){
            continue;
        }
        int count = 0;
        for(int j = 0; j < strlen(string); j++){
            if(string[j] == string[i]){
                count++;
            }
        }
        done[found] = string[i];
        found++;
        printf("%c: %d\n", string[i], count);
    }

}

/*
Output

Enter the string:
Hello World!
H: 1
e: 1
l: 3
o: 2
 : 1
W: 1
r: 1
d: 1
!: 1

*/