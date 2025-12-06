//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r;

    printf("Enter role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &r);

    switch (r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello User! You have limited access.\n");
            break;
        case GUEST:
            printf("Greetings Guest! You have view-only access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
