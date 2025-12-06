//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
