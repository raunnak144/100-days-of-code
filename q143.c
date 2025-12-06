//#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, topIndex = 0;

    // Input
    for (i = 0; i < 5; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Print all students
    printf("---- Student Details ----\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n",
                s[i].name, s[i].roll_no, s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\n---- Topper ----\n");
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n",
           s[topIndex].name, s[topIndex].roll_no, s[topIndex].marks);

    return 0;
}
