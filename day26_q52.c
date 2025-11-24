//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*




#include <stdio.h>

int main() {
    int i;

    // First group: 1 star
    printf("*\n\n");

    // Second group: 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Third group: 5 stars
    for(i = 1; i <= 5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fourth group: 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Fifth group: 1 star
    printf("*\n");

    return 0;
}
