//Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {

    // 1. Enum for days
    enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
    printf("Days of the week:\n");
    for (int d = SUNDAY; d <= SATURDAY; d++)
        printf("%d ", d);
    printf("\n\n");

    // 2. Enum for traffic lights
    enum Traffic { RED, YELLOW, GREEN };
    enum Traffic signal = RED;

    printf("Traffic Signal Output:\n");
    switch (signal) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
    }
    printf("\n");

    // 3. Enum for months + days
    enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
    printf("Days in each month:\n");
    for (int m = JAN; m <= DEC; m++) {
        int days;
        switch (m) {
            case APR: case JUN: case SEP: case NOV: days = 30; break;
            case FEB: days = 28; break;
            default: days = 31;
        }
        printf("Month %d -> %d days\n", m, days);
    }
    printf("\n");

    // 4. Enum with explicit values starting from 10
    enum Numbers { A = 10, B, C, D };
    printf("Explicit enum values (starting from 10): A=%d B=%d C=%d D=%d\n\n", A, B, C, D);

    // 5. Enum for menu choices + switch operations
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum Menu choice = MULTIPLY;
    int x = 5, y = 3;
    printf("Menu Operation:\n");
    switch (choice) {
        case ADD:       printf("%d + %d = %d\n", x, y, x + y); break;
        case SUBTRACT:  printf("%d - %d = %d\n", x, y, x - y); break;
        case MULTIPLY:  printf("%d * %d = %d\n", x, y, x * y); break;
    }
    printf("\n");

    // 6. Enum for user roles + messages
    enum Role { ADMIN, USER, GUEST };
    enum Role r = USER;
    printf("User Role:\n");
    switch (r) {
        case ADMIN: printf("Welcome Admin. Full Access.\n"); break;
        case USER:  printf("Welcome User. Limited Access.\n"); break;
        case GUEST: printf("Welcome Guest. View Access Only.\n"); break;
    }
    printf("\n");

    // 7. Print all enum names and integer values using loop
    printf("Printing enum Day values using loop:\n");
    for (int i = SUNDAY; i <= SATURDAY; i++)
        printf("Day %d = %d\n", i, i);
    printf("\n");

    // 8. Show that enums store integers
    enum Example { E1 = 5, E2 = 20, E3 = 100 };
    printf("Enums store integers: %d %d %d\n", E1, E2, E3);

    return 0;
}

