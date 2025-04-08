#include <stdio.h>

int main() {
    int num = 10;
    char buffer[50];

    // Direct output using printf
    printf("Using printf: Number: %d\n", num);

    // Formatting into a string using sprintf
    sprintf(buffer, "Using sprintf: Number: %d", num);
    printf("%s\n", buffer);

    return 0;
}
