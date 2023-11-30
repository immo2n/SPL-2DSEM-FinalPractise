//1. Write a Code in C to Store information about a student using structure.

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char id[15];
    int age;
    char phone[11];
};

int main(){

    struct Student student1;

    strcpy(student1.name, "K K Bilas");
    strcpy(student1.id, "123-334-3");
    student1.age = 22;
    strcpy(student1.phone, "01234567");

    printf("Name: %s\n", student1.name);
    printf("ID: %s\n", student1.id);
    printf("Age: %d\n", student1.age);
    printf("Phone: %s\n", student1.phone);

    return 0;
}