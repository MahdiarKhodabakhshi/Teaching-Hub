#include <stdio.h>
#include <string.h>

int main() {
    char csv[] = "John,25,Engineer,Toronto";
    //# Split the CSV string on commas
    char *token = strtok(csv, ",");

    //# Loop through all tokens
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
