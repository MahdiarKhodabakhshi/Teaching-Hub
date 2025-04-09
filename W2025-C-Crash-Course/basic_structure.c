#include <stdio.h>
#include <string.h> //# For strcpy()

struct element {
    char name[14];       //# Element name
    char symbol[3];      //# Element symbol
    double atomic_mass;  //# Atomic mass
    int atomic_number;   //# Atomic number
};

int main() {
    //# Initialize a structure variable for Hydrogen
    struct element hydrogen = { "Hydrogen", "H", 1.008, 1 };
    struct element oxygen;

    //# Assign values to oxygen
    strcpy(oxygen.name, "Oxygen");
    strcpy(oxygen.symbol, "O");
    oxygen.atomic_mass = 15.999;
    oxygen.atomic_number = 8;

    //# Display element details
    printf("Element: %s\n", hydrogen.name);
    printf("Symbol: %s\n", hydrogen.symbol);
    printf("Atomic Mass: %.3f\n", hydrogen.atomic_mass);
    printf("Atomic Number: %d\n", hydrogen.atomic_number);
    printf("\nElement: %s\n", oxygen.name);
    printf("Symbol: %s\n", oxygen.symbol);
    printf("Atomic Mass: %.3f\n", oxygen.atomic_mass);
    printf("Atomic Number: %d\n", oxygen.atomic_number);

    return 0;
}
