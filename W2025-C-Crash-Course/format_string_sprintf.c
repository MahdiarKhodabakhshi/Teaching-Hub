#include <stdio.h>

int main() {
    char output[50];  //# Buffer to store the formatted string
    char name[] = "Alice";
    int age = 20;

    sprintf(output, "Name: %s, Age: %d", name, age);
    printf("%s\n", output);
    return 0;
}
