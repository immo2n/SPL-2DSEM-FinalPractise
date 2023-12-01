// 1. Write a program in C to count the total number of alphabets, digits, special characters, vowels, white space, and consonants in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int alphabets = 0,
        digits = 0,
        special = 0,
        vowels = 0,
        space = 0,
        consonant = 0;

    char string[100];
    gets(string);

    for (int i = 0; i < strlen(string); i++)
    {
        char c = tolower(string[i]);
        int i = c;
        if ((c >= 'a' && c <= 'z'))
        {
            alphabets++;
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                vowels++;
            }
            else {
                consonant++;
            }
        }
        else if(i >= 0 && i <= 9){
            digits++;
        }
        else if(c == ' '){
            space++;
        }
        else {
            special++;
        }
    }
    printf("Alphabets: %d, Digits: %d, Special Characters: %d, Vowels: %d, Spaces: %d, Consonants: %d\n", alphabets, digits, vowels, space, consonant);
    return 0;
}