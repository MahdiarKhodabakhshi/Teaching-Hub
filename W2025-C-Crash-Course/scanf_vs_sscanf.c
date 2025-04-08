#include <stdio.h>

int main() {
    char input_str[] = "45 78";
    int num1, num2;

    //# Extract numbers from a string using sscanf
    sscanf(input_str, "%d %d", &num1, &num2);
    printf("Extracted from string: num1 = %d, num2 = %d\n", num1, num2);

    //# Read numbers from keyboard input using scanf
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
