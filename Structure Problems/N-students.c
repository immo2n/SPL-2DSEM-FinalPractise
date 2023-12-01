//5. Write a Code in C to Store information of n students using structures.

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char id[15];
    int age;
    char phone[11];
} Student;

int main(){

    int n;
    printf("Enter student count: ");
    scanf("%d", &n);

    Student student[n];

    for(int x = 0; x < n; x++){
        printf("Enter information for student: %d\n", x+1);
        scanf("%s", &student[x].name);
        scanf("%s", &student[x].id);
        scanf("%d", &student[x].age);
        scanf("%s", &student[x].phone);
    }

    for(int x = 0; x < n; x++){
        printf("Information for student: %d\n", x+1);
        printf("Name: %s\n", student[x].name);
        printf("ID: %s\n", student[x].id);
        printf("Age: %d\n", student[x].age);
        printf("Phone: %s\n", student[x].phone);
    }

    return 0;
}