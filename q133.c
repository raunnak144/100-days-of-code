//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;
    
    for (m = JAN; m <= DEC; m++) {
        switch (m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case DEC:
                printf("%d: 31 days\n", m);
                break;

            case APR: case JUN: case SEP: case NOV:
                printf("%d: 30 days\n", m);
                break;

            case FEB:
                printf("%d: 28 or 29 days\n", m);
                break;
        }
    }

    return 0;
}
