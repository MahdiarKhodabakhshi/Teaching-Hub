#include <stdio.h>

int main() {
    FILE *in; //# File pointer for input
    char island[100];

    //# Open a file
    in = fopen("fscanf_vs_fgets_test.txt", "r");
    if (in == NULL) {
        perror("Error opening file");
        return 1;
    }

    //# Using fscanf to read a string from the file
    fscanf(in, "%s", island);
    printf("Using fscanf, read from file: %s\n", island);

    //# Reset file pointer and use fgets to read the whole line from file
    rewind(in);
    fgets(island, 100, in);
    printf("Using fgets, read from file: %s", island);

    fclose(in);
    return 0;
}
