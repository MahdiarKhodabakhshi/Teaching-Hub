#include <stdio.h>
#include <string.h> // strcpy function belongs to this library

int main() {
    //# Can store 100 strings, each up to 14 characters (+1 for '\0')
    char list_cities[100][15];

    //# An example initialization:
    strcpy(list_cities[0], "Toronto");
    strcpy(list_cities[1], "Vancouver");
    printf("First city: %s\n", list_cities[0]);
    return 0;
}
