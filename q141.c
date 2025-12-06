Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

// ENUM DEFINITIONS
enum Day { SUNDAY=0, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
enum Traffic { RED=1, YELLOW, GREEN };
enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
enum Menu { ADD=10, SUBTRACT, MULTIPLY };   // explicit starting 10
enum Role { ADMIN=1, USER, GUEST };
enum Gender { MALE=1, FEMALE, OTHER };

// STRUCTURES
struct Person {
    char name[50];
    enum Gender gender;
};

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {

    // 1. Print days with values
    printf("Days of week:\n");
    for(int d = SUNDAY; d <= SATURDAY; d++) {
        printf("%d ", d);
    }
    printf("\n\n");

    // 2. Traffic light
    enum Traffic signal = RED;
    printf("Traffic Light: ");
    switch(signal){
        case RED: printf("Stop\n\n"); break;
        case YELLOW: printf("Wait\n\n"); break;
        case GREEN: printf("Go\n\n"); break;
    }

    // 3. Print months and days
    printf("Months and number of days:\n");
    for(int m = JAN; m <= DEC; m++){
        int days = 30;
        if(m==JAN||m==MAR||m==MAY||m==JUL||m==AUG||m==OCT||m==DEC)
            days = 31;
        else if(m==FEB)
            days = 28;
        printf("Month %d has %d days\n", m, days);
    }
    printf("\n");

    // 4. Print enum starting from 10
    printf("Menu Enum Values: ADD=%d SUBTRACT=%d MULTIPLY=%d\n\n", ADD, SUBTRACT, MULTIPLY);

    // 5. Use enum in menu operations
    enum Menu choice = MULTIPLY;
    int a = 5, b = 3;
    printf("Operation result: ");
    switch(choice){
        case ADD: printf("%d\n\n", a+b); break;
        case SUBTRACT: printf("%d\n\n", a-b); break;
        case MULTIPLY: printf("%d\n\n", a*b); break;
    }

    // 6. Role based message
    enum Role r = USER;
    printf("Role Message: ");
    if(r == ADMIN) printf("Welcome Admin\n\n");
    else if(r == USER) printf("Welcome User\n\n");
    else printf("Welcome Guest\n\n");

    // 7. Print all enum names & values
    printf("Printing Days Enum Values:\n");
    for(int d = SUNDAY; d <= SATURDAY; d++)
        printf("Day %d\n", d);
    printf("\n");

    // 8. Show enums store integers
    printf("Enum integer test: RED=%d, GREEN=%d\n\n", RED, GREEN);

    // 9. Struct with Gender enum
    struct Person p = {"Amit", MALE};
    printf("Person: %s, Gender=%d\n\n", p.name, p.gender);

    // 10. Structure Student read & print
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}

