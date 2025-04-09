#include <stdio.h>
#include <string.h>

typedef struct element {
    char name[14];
    char symbol[3];
    double atomic_mass;
    int atomic_number;
} ele;

//# Function to read an element's data from the user
ele read_element(void) {
    ele e;
    printf("Enter the name, symbol, atomic mass and atomic number (separated by spaces): ");
    scanf("%s %s %lf %d", e.name, e.symbol, &e.atomic_mass, &e.atomic_number);
    return e;
}

int main() {
    ele e2;

    //# Read element data from user
    e2 = read_element();

    // Display the input element details
    printf("\nYou entered the following element:\n");
    printf("Name: %s\n", e2.name);
    printf("Symbol: %s\n", e2.symbol);
    printf("Atomic Mass: %.2lf\n", e2.atomic_mass);
    printf("Atomic Number: %d\n", e2.atomic_number);

    //# For demonstration: reading element data from a file "elements.txt" (if exists)
    FILE *in = fopen("elements.txt", "r");
    if (in != NULL) {
        ele e3;
        fscanf(in, "%s", e3.symbol);
        fgets(e3.name, sizeof(e3.name), in);  //# Read a line (can include spaces)
        fscanf(in, "%lf", &e3.atomic_mass);
        fscanf(in, "%d", &e3.atomic_number);
        fclose(in);

        printf("\nElement read from file:\n");
        printf("Name: %s\n", e3.name);
        printf("Symbol: %s\n", e3.symbol);
        printf("Atomic Mass: %.5lf\n", e3.atomic_mass);
        printf("Atomic Number: %d\n", e3.atomic_number);
    } else {
        printf("\nError opening file for reading.\n");
    }

    return 0;
}
