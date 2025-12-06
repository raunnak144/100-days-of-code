//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Month {
    JAN = 10,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main() {
    printf("JAN = %d\n", JAN);
    printf("FEB = %d\n", FEB);
    printf("MAR = %d\n", MAR);
    printf("APR = %d\n", APR);
    printf("MAY = %d\n", MAY);
    printf("JUN = %d\n", JUN);
    printf("JUL = %d\n", JUL);
    printf("AUG = %d\n", AUG);
    printf("SEP = %d\n", SEP);
    printf("OCT = %d\n", OCT);
    printf("NOV = %d\n", NOV);
    printf("DEC = %d\n", DEC);

    return 0;
}
