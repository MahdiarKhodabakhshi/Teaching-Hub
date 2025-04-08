#include <stdio.h>

int main() {
    //# Initialize an array of string literals
    char *words[] = { "Apple", "Banana", "Cherry" };

    //# Print the second word ("Banana")
    printf("%s\n", words[1]);

    //# Print the 4th character of "Cherry" ('r')
    printf("%c\n", words[2][3]);

    return 0;
}
