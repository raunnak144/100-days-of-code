//Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}

struct Student getTopStudent(struct Student st[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (st[i].marks > st[idx].marks)
            idx = i;
    }
    return st[idx];
}

int main() {
    struct Student s[5];

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printStudent(s[i]);
        printf("\n");
    }

    struct Student topper = getTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printStudent(topper);

    return 0;
}
