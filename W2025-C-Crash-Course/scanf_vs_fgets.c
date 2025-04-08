#include <stdio.h>

int main() {
    char island[100];  // Buffer to hold input

    //# Using scanf to read a string (stops at whitespace)
    printf("Enter the island name (scanf reads only until whitespace): ");
    scanf("%s", island);  
    //# island is used without '&' because it is already a pointer to the first element.
    printf("Using scanf, you entered: %s\n", island);

    //# Clear input buffer before using fgets
    while (getchar() != '\n'); 

    //# Using fgets to read a full line including spaces
    printf("Enter the island name again (fgets reads entire line): ");
    fgets(island, 100, stdin);
    //# Note: fgets keeps the newline character if there's room
    printf("Using fgets, you entered: %s", island);

    return 0;
}
