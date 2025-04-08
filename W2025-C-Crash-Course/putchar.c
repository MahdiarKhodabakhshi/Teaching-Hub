#include <stdio.h>

int main() {
    char c = 'C';
    putchar('A');    // Outputs 'A'
    putchar(66);     // Outputs 'B' (ASCII value 66)
    putchar(c);      // Outputs 'C'
    putchar('\n');   // Outputs a newline
    return 0;
}
