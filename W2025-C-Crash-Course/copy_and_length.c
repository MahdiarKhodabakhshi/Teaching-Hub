#include <stdio.h>
#include <string.h>

int main() {
    char island[10], country[10];

    //# Copy "Fiji" into 'island'
    strncpy(island, "Fiji", 10);
    //# Copy the content of 'island' into 'country'
    strncpy(country, island, 10);   

    printf("Island: %s\n", island);
    printf("Country: %s\n", country);

    char city[30];
    //# Copy "St. John's" into 'city'
    strncpy(city, "St. John's", 30);
    //# Print the length of the string in 'city' (excluding the null terminator)
    printf("Length of city: %d\n", (int)strlen(city));

    return 0;
}
