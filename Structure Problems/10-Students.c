//4. Write a Code in C to Store information of 10 students using structures

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char id[15];
    int age;
    char phone[11];
};

int main(){

    struct Student student[10];

    for(int x = 0; x < 10; x++){
        printf("Enter information for student: %d\n", x+1);
        scanf("%s", &student[x].name);
        scanf("%s", &student[x].id);
        scanf("%d", &student[x].age);
        scanf("%s", &student[x].phone);
    }

    for(int x = 0; x < 10; x++){
        printf("Information for student: %d\n", x+1);
        printf("Name: %s\n", student[x].name);
        printf("ID: %s\n", student[x].id);
        printf("Age: %d\n", student[x].age);
        printf("Phone: %s\n", student[x].phone);
    }

    return 0;
}