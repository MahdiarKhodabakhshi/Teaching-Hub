#include <stdio.h>
#include <string.h> // For strncpy()

typedef struct element {
    char name[14];
    char symbol[3];
    double atomic_mass;
    int atomic_number;
} ele;

int main() {
    // Declare and initialize structure variables without the need for "struct"
    ele e1 = {"Hydrogen", "H", 1.00794, 1};
    ele e2;

    // Fill values for e2 (example: Helium)
    strncpy(e2.name, "Helium", 14);
    strncpy(e2.symbol, "He", 3);
    e2.atomic_number = 2;
    e2.atomic_mass = 4.002602;

    // Display elements
    printf("Element: %s, Symbol: %s, Atomic Number: %d, Atomic Mass: %.5f\n",
           e1.name, e1.symbol, e1.atomic_number, e1.atomic_mass);
    printf("Element: %s, Symbol: %s, Atomic Number: %d, Atomic Mass: %.5f\n",
           e2.name, e2.symbol, e2.atomic_number, e2.atomic_mass);

    return 0;
}
