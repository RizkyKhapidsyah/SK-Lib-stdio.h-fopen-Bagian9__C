#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    //open the file in read mode
    FILE* pFile = fopen("test.txt", "r");

    //first character in the file
    int c = getc(pFile);

    //if first character is not EOF, reads and writes
    //characters from the file until EOF is reached
    while (c != EOF) {
        putchar(c);
        c = getc(pFile);
    }

    //close the file
    fclose(pFile);

    _getch();
    return 0;
}

