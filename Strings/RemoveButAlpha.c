//4. Write a program in C to remove characters from a string except alphabets.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char string[100];
    printf("Enter the string: ");
    gets(string);
    char new[100];
    
    int j = 0;
    for(int i = 0; i < strlen(string); i++){
        char target = tolower(string[i]);
        if(target >= 'a' && target <= 'z'){
            new[j] = string[i];
            j++;
        }
    }

    for(int k = 0; k < j; k++){
        printf("%c", new[k]);
    }

    return 0;
}

/* Output
Enter the string: Hello2!%^World!
HelloWorld
*/
