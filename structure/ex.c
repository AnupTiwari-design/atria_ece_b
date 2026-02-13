#include <stdio.h>

struct Student {
    char name[100];
    int rollno;
    float marks;
};

int main() {
    struct Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Rollno: %d\n", s[i].rollno);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}