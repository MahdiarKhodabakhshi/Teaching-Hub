#include <stdio.h>

int main() {
    char input[] = "Alice 20";  //# Input stored in a string
    char name[20];
    int age;

    //# sscanf extracts data from the string instead of stdin
    //# Use sscanf when the input is already in a string format
    sscanf(input, "%s %d", name, &age);
    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
