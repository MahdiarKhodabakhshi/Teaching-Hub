#include <stdio.h>

int main() {
    FILE *inp;
    char ch;

    //# Open a file for reading
    inp = fopen("getc_tester.txt", "r");
    if (inp == NULL) {
        perror("Error opening file");
        return 1;
    }

    ch = getc(inp);  //# Reads a single character from the file
    printf("Character from file: %c\n", ch);

    fclose(inp);
    return 0;
}
