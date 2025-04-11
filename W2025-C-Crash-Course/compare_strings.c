#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello123";
    char str2[] = "hello456";

    //# Compare first 5 characters (they are the same)
    int result = strncmp(str1, str2, 5);
    printf("Result (first 5 chars): %d\n", result);

    //# Compare first 8 characters (difference starts at 6th character)
    result = strncmp(str1, str2, 8);
    printf("Result (first 8 chars): %d\n", result);

    return 0;
}
