#include <stdio.h>

int main() {
    char city[] = "Toronto";  //# Original string

    //# Loop through the first 7 characters of the string
    for (int i = 0; i < 7; ++i) {
        // Replace 'o' with 'a'
        if (city[i] == 'o') {
            city[i] = 'a';
        }
    }

    printf("Modified city name: %s\n", city);
    return 0;
}
