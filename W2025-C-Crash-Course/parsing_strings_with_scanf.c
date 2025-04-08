#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("Enter your name and age: ");
    //# Reads a name and an integer from keyboard input
    scanf("%s %d", name, &age);  
    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
