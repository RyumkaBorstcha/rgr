#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>

int slen(char* str)
{
    int len = 0;

    while (str[len])
        len++;

    return len;
}

int main() {

    printf("Enter filename: ");
    char* fname = (char*)malloc(256);
    scanf("%s", fname);
    FILE* fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Error\nThis file does not exist\n");
        getch();
        return 0;
    }

    fclose(fname);

}