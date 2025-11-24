#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp = fopen("pre.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1; 
    }
    else
    {
        fgets(str * , 50 , fp);
        printf("%s",str);

    fclose(fp); 
}}
