//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// 1. Enum for days
enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

// 2. Enum for traffic lights
enum Traffic { RED, YELLOW, GREEN };

// 3. Enum for months
enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

// 4. Enum with explicit values starting at 10
enum Numbers { A = 10, B, C, D };

// 5. Enum for menu choices
enum Menu { ADD = 1, SUBTRACT, MULTIPLY };

// 6. Enum for user roles
enum Role { ADMIN, USER, GUEST };

// 7. Struct with enum Gender
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {

    // -------------------- 1. Print days with values --------------------
    printf("Days of the week:\n");
    for (int d = SUNDAY; d <= SATURDAY; d++)
        printf("%d ", d);
    printf("\n\n");

    // -------------------- 2. Traffic light messages --------------------
    enum Traffic signal = RED;
    printf("Traffic Signal Test:\n");
    if (signal == RED) printf("Stop\n");
    else if (signal == YELLOW) printf("Wait\n");
    else printf("Go\n");
    printf("\n");

    // -------------------- 3. Months and days --------------------
    printf("Months and days:\n");
    for (int m = JAN; m <= DEC; m++) {
        int days;
        switch(m) {
            case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
                days = 31; break;
            case APR: case JUN: case SEP: case NOV:
                days = 30; break;
            case FEB:
                days = 28; break;
        }
        printf("Month %d has %d days\n", m, days);
    }
    printf("\n");

    // -------------------- 4. Explicit enum values --------------------
    printf("Explicit enum values:\n");
    printf("A=%d B=%d C=%d D=%d\n\n", A, B, C, D);

    // -------------------- 5. Menu operations --------------------
    printf("Menu Operation Example:\n");
    enum Menu choice = MULTIPLY;
    int x = 5, y = 3;
    switch (choice) {
        case ADD: printf("%d\n", x + y); break;
        case SUBTRACT: printf("%d\n", x - y); break;
        case MULTIPLY: printf("%d\n", x * y); break;
    }
    printf("\n");

    // -------------------- 6. User roles --------------------
    printf("User Roles:\n");
    enum Role r = ADMIN;
    if (r == ADMIN) printf("Welcome Admin\n");
    else if (r == USER) printf("Welcome User\n");
    else printf("Welcome Guest\n");
    printf("\n");

    // -------------------- 7. Struct with enum Gender --------------------
    struct Person p = {"Rahul", MALE};
    printf("Person: %s, Gender = %d\n\n", p.name, p.gender);

    // -------------------- 8. Print all enum names & values --------------------
    printf("Print enum Numbers using loop:\n");
    for (int i = A; i <= D; i++)
        printf("%d ", i);
    printf("\n\n");

    // -------------------- 9. Enums store integers demonstration --------------------
    printf("Enums store integers: A=%d, D=%d\n", A, D);

    return 0;
}
